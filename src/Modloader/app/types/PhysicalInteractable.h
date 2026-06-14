#pragma once
#include <Modloader/app/structs/PhysicalInteractable.h>
#include <Modloader/app/structs/PhysicalInteractable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalInteractable {
        inline app::PhysicalInteractable__Class** type_info() {
            static app::PhysicalInteractable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicalInteractable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicalInteractable__Class* get_class() {
            return il2cpp::get_class<app::PhysicalInteractable__Class>(type_info(), "", "PhysicalInteractable");
        }
        inline app::PhysicalInteractable* create() {
            return il2cpp::create_object<app::PhysicalInteractable>(get_class());
        }
    } // namespace PhysicalInteractable
} // namespace app::classes::types
