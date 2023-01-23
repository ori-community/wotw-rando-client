#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritLeashInteractable__Class.h>
#include <Modloader/app/structs/SpiritLeashInteractable.h>

namespace app::classes::types {
    namespace SpiritLeashInteractable {
        namespace {
            inline app::SpiritLeashInteractable__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLeashInteractable__Class** type_info = &type_info_ref;
        inline app::SpiritLeashInteractable__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashInteractable__Class>(type_info, "", "SpiritLeashInteractable");
        }
        inline app::SpiritLeashInteractable* create() {
            return il2cpp::create_object<app::SpiritLeashInteractable>(get_class());
        }
    } // namespace SpiritLeashInteractable
} // namespace app::classes::types
