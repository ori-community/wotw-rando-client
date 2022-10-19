#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinCharacter_c {
        inline app::SeinCharacter_c__Class** type_info = (app::SeinCharacter_c__Class**)(modloader::win::memory::resolve_rva(0x047698E8));
        inline app::SeinCharacter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCharacter_c__Class>(type_info, "", "SeinCharacter", "<>c");
        }
        inline app::SeinCharacter_c* create() {
            return il2cpp::create_object<app::SeinCharacter_c>(get_class());
        }
    } // namespace SeinCharacter_c
} // namespace app::classes::types
