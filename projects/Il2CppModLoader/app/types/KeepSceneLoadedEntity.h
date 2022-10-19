#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeepSceneLoadedEntity {
        namespace {
            inline app::KeepSceneLoadedEntity__Class* type_info_ref = nullptr;
        }
        inline app::KeepSceneLoadedEntity__Class** type_info = &type_info_ref;
        inline app::KeepSceneLoadedEntity__Class* get_class() {
            return il2cpp::get_class<app::KeepSceneLoadedEntity__Class>(type_info, "Moon.Timeline", "KeepSceneLoadedEntity");
        }
        inline app::KeepSceneLoadedEntity* create() {
            return il2cpp::create_object<app::KeepSceneLoadedEntity>(get_class());
        }
    } // namespace KeepSceneLoadedEntity
} // namespace app::classes::types
