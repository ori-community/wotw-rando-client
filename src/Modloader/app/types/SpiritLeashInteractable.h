#pragma once
#include <Modloader/app/structs/SpiritLeashInteractable.h>
#include <Modloader/app/structs/SpiritLeashInteractable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashInteractable {
        inline app::SpiritLeashInteractable__Class** type_info() {
            static app::SpiritLeashInteractable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashInteractable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashInteractable__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashInteractable__Class>(type_info(), "", "SpiritLeashInteractable");
        }
        inline app::SpiritLeashInteractable* create() {
            return il2cpp::create_object<app::SpiritLeashInteractable>(get_class());
        }
    } // namespace SpiritLeashInteractable
} // namespace app::classes::types
