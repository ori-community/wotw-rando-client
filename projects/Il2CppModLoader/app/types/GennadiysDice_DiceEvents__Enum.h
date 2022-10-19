#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GennadiysDice_DiceEvents__Enum {
        inline app::GennadiysDice_DiceEvents__Enum__Class** type_info = (app::GennadiysDice_DiceEvents__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730470));
        inline app::GennadiysDice_DiceEvents__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GennadiysDice_DiceEvents__Enum__Class>(type_info, "Moon.Timeline", "GennadiysDice", "DiceEvents");
        }
        inline app::GennadiysDice_DiceEvents__Enum* create() {
            return il2cpp::create_object<app::GennadiysDice_DiceEvents__Enum>(get_class());
        }
    } // namespace GennadiysDice_DiceEvents__Enum
} // namespace app::classes::types
