#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_LoadPrefabInfos_d_41 {
        namespace {
            app::UberPoolPerfTest_LoadPrefabInfos_d_41__Class* type_info_ref = nullptr;
        }
        app::UberPoolPerfTest_LoadPrefabInfos_d_41__Class** type_info = &type_info_ref;
        inline app::UberPoolPerfTest_LoadPrefabInfos_d_41__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_LoadPrefabInfos_d_41__Class>(type_info, "", "UberPoolPerfTest", "<LoadPrefabInfos>d__41");
        }
        inline app::UberPoolPerfTest_LoadPrefabInfos_d_41* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_LoadPrefabInfos_d_41>(get_class());
        }
        inline app::UberPoolPerfTest_LoadPrefabInfos_d_41__Boxed* box(app::UberPoolPerfTest_LoadPrefabInfos_d_41 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_LoadPrefabInfos_d_41__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_LoadPrefabInfos_d_41
} // namespace app::classes::types
