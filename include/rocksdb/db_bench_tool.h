// Copyright (c) 2013-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).
#pragma once

#include "env.h"
#include "rocksdb/rocksdb_namespace.h"

namespace ROCKSDB_NAMESPACE {
int db_bench_tool(int argc, char** argv);
}  // namespace ROCKSDB_NAMESPACE

extern ROCKSDB_NAMESPACE::Env* FLAGS_env;
extern std::shared_ptr<ROCKSDB_NAMESPACE::Env> env_guard;