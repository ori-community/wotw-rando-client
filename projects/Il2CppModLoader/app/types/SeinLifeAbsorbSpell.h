#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLifeAbsorbSpell {
        namespace {
            inline app::SeinLifeAbsorbSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinLifeAbsorbSpell__Class** type_info = &type_info_ref;
        inline app::SeinLifeAbsorbSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLifeAbsorbSpell__Class>(type_info, "", "SeinLifeAbsorbSpell");
        }
        inline app::SeinLifeAbsorbSpell* create() {
            return il2cpp::create_object<app::SeinLifeAbsorbSpell>(get_class());
        }
    } // namespace SeinLifeAbsorbSpell
} // namespace app::classes::types
