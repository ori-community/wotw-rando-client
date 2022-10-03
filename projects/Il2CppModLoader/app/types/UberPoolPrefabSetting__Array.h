#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrefabSetting__Array {
        namespace {
            app::UberPoolPrefabSetting__Array__Class* type_info_ref = nullptr;
        }
        app::UberPoolPrefabSetting__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolPrefabSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrefabSetting__Array__Class>(type_info, "", "UberPoolPrefabSetting[]");
        }
        inline app::UberPoolPrefabSetting__Array* create() {
            return il2cpp::create_object<app::UberPoolPrefabSetting__Array>(get_class());
        }
    } // namespace UberPoolPrefabSetting__Array
} // namespace app::classes::types
