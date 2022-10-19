#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMarkOfTheWildsSpell {
        namespace {
            inline app::SeinMarkOfTheWildsSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinMarkOfTheWildsSpell__Class** type_info = &type_info_ref;
        inline app::SeinMarkOfTheWildsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMarkOfTheWildsSpell__Class>(type_info, "", "SeinMarkOfTheWildsSpell");
        }
        inline app::SeinMarkOfTheWildsSpell* create() {
            return il2cpp::create_object<app::SeinMarkOfTheWildsSpell>(get_class());
        }
    } // namespace SeinMarkOfTheWildsSpell
} // namespace app::classes::types
