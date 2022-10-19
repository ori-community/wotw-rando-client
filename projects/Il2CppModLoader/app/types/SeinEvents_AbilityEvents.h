#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEvents_AbilityEvents {
        inline app::SeinEvents_AbilityEvents__Class** type_info = (app::SeinEvents_AbilityEvents__Class**)(modloader::win::memory::resolve_rva(0x0470BA98));
        inline app::SeinEvents_AbilityEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_AbilityEvents__Class>(type_info, "Game", "SeinEvents", "AbilityEvents");
        }
        inline app::SeinEvents_AbilityEvents* create() {
            return il2cpp::create_object<app::SeinEvents_AbilityEvents>(get_class());
        }
    } // namespace SeinEvents_AbilityEvents
} // namespace app::classes::types
