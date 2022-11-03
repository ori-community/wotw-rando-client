#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEvents_KuAbilityEvents {
        inline app::SeinEvents_KuAbilityEvents__Class** type_info = (app::SeinEvents_KuAbilityEvents__Class**)(modloader::win::memory::resolve_rva(0x0475C0C8));
        inline app::SeinEvents_KuAbilityEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_KuAbilityEvents__Class>(type_info, "Game", "SeinEvents", "KuAbilityEvents");
        }
        inline app::SeinEvents_KuAbilityEvents* create() {
            return il2cpp::create_object<app::SeinEvents_KuAbilityEvents>(get_class());
        }
    } // namespace SeinEvents_KuAbilityEvents
} // namespace app::classes::types
