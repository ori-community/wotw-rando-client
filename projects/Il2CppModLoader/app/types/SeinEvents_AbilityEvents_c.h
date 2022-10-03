#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEvents_AbilityEvents_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinEvents_AbilityEvents_c__Class** type_info;
        inline app::SeinEvents_AbilityEvents_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_AbilityEvents_c__Class>(type_info, "Game", "SeinEvents+AbilityEvents", "<>c");
        }
        inline app::SeinEvents_AbilityEvents_c* create() {
            return il2cpp::create_object<app::SeinEvents_AbilityEvents_c>(get_class());
        }
    } // namespace SeinEvents_AbilityEvents_c
} // namespace app::classes::types
