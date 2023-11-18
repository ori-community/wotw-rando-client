#pragma once
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents.h>
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEvents_KuAbilityEvents {
        inline app::SeinEvents_KuAbilityEvents__Class** type_info() {
            static app::SeinEvents_KuAbilityEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinEvents_KuAbilityEvents__Class**)(modloader::win::memory::resolve_rva(0x0475C0C8));
            }
            return cache;
        }
        inline app::SeinEvents_KuAbilityEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_KuAbilityEvents__Class>(type_info(), "Game", "SeinEvents", "KuAbilityEvents");
        }
        inline app::SeinEvents_KuAbilityEvents* create() {
            return il2cpp::create_object<app::SeinEvents_KuAbilityEvents>(get_class());
        }
    } // namespace SeinEvents_KuAbilityEvents
} // namespace app::classes::types
