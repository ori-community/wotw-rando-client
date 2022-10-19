#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompoundState_c {
        inline app::CompoundState_c__Class** type_info = (app::CompoundState_c__Class**)(modloader::win::memory::resolve_rva(0x0473EAF8));
        inline app::CompoundState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundState_c__Class>(type_info, "Moon.InteractionGraph", "CompoundState", "<>c");
        }
        inline app::CompoundState_c* create() {
            return il2cpp::create_object<app::CompoundState_c>(get_class());
        }
    } // namespace CompoundState_c
} // namespace app::classes::types
