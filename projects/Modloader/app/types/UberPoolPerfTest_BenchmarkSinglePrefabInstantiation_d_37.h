#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37 {
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Class** type_info() {
            static app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Class>(type_info(), "", "UberPoolPerfTest", "<BenchmarkSinglePrefabInstantiation>d__37");
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37>(get_class());
        }
        inline app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Boxed* box(app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_BenchmarkSinglePrefabInstantiation_d_37
} // namespace app::classes::types
