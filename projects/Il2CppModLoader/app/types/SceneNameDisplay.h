#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneNameDisplay {
        namespace {
            inline app::SceneNameDisplay__Class* type_info_ref = nullptr;
        }
        inline app::SceneNameDisplay__Class** type_info = &type_info_ref;
        inline app::SceneNameDisplay__Class* get_class() {
            return il2cpp::get_class<app::SceneNameDisplay__Class>(type_info, "", "SceneNameDisplay");
        }
        inline app::SceneNameDisplay* create() {
            return il2cpp::create_object<app::SceneNameDisplay>(get_class());
        }
    } // namespace SceneNameDisplay
} // namespace app::classes::types
