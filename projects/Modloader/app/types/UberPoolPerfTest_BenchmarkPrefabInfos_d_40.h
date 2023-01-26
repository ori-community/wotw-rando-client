#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_BenchmarkPrefabInfos_d_40 {
        inline app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Class** type_info() {
            static app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Class>(type_info(), "", "UberPoolPerfTest", "<BenchmarkPrefabInfos>d__40");
        }
        inline app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40>(get_class());
        }
        inline app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Boxed* box(app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_BenchmarkPrefabInfos_d_40__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_BenchmarkPrefabInfos_d_40
} // namespace app::classes::types
