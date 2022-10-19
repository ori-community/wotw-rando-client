#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingEntity {
        namespace {
            inline app::SceneLoadingEntity__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingEntity__Class** type_info = &type_info_ref;
        inline app::SceneLoadingEntity__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingEntity__Class>(type_info, "Moon.Timeline", "SceneLoadingEntity");
        }
        inline app::SceneLoadingEntity* create() {
            return il2cpp::create_object<app::SceneLoadingEntity>(get_class());
        }
    } // namespace SceneLoadingEntity
} // namespace app::classes::types
