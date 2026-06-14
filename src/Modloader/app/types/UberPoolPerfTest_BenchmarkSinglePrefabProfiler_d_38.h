#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38 {
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Class** type_info() {
            static app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Class>(type_info(), "", "UberPoolPerfTest", "<BenchmarkSinglePrefabProfiler>d__38");
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38>(get_class());
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Boxed* box(app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_BenchmarkSinglePrefabProfiler_d_38
} // namespace app::classes::types
