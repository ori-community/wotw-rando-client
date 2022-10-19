#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBowAttack {
        inline app::SeinBowAttack__Class** type_info = (app::SeinBowAttack__Class**)(modloader::win::memory::resolve_rva(0x047396F0));
        inline app::SeinBowAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinBowAttack__Class>(type_info, "", "SeinBowAttack");
        }
        inline app::SeinBowAttack* create() {
            return il2cpp::create_object<app::SeinBowAttack>(get_class());
        }
    } // namespace SeinBowAttack
} // namespace app::classes::types
