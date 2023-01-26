#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39 {
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Class** type_info() {
            static app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Class>(type_info(), "", "UberPoolPerfTest", "<BenchmarkSinglePrefabPrewarm>d__39");
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39>(get_class());
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Boxed* box(app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_BenchmarkSinglePrefabPrewarm_d_39
} // namespace app::classes::types
