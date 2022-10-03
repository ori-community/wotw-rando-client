#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightColliderGroup {
        namespace {
            app::LightColliderGroup__Class* type_info_ref = nullptr;
        }
        app::LightColliderGroup__Class** type_info = &type_info_ref;
        inline app::LightColliderGroup__Class* get_class() {
            return il2cpp::get_class<app::LightColliderGroup__Class>(type_info, "", "LightColliderGroup");
        }
        inline app::LightColliderGroup* create() {
            return il2cpp::create_object<app::LightColliderGroup>(get_class());
        }
    } // namespace LightColliderGroup
} // namespace app::classes::types
