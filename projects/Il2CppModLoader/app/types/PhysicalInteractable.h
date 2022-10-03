#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalInteractable {
        namespace {
            app::PhysicalInteractable__Class* type_info_ref = nullptr;
        }
        app::PhysicalInteractable__Class** type_info = &type_info_ref;
        inline app::PhysicalInteractable__Class* get_class() {
            return il2cpp::get_class<app::PhysicalInteractable__Class>(type_info, "", "PhysicalInteractable");
        }
        inline app::PhysicalInteractable* create() {
            return il2cpp::create_object<app::PhysicalInteractable>(get_class());
        }
    } // namespace PhysicalInteractable
} // namespace app::classes::types
