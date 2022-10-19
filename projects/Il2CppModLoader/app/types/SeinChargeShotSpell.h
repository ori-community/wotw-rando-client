#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChargeShotSpell {
        namespace {
            inline app::SeinChargeShotSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinChargeShotSpell__Class** type_info = &type_info_ref;
        inline app::SeinChargeShotSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeShotSpell__Class>(type_info, "", "SeinChargeShotSpell");
        }
        inline app::SeinChargeShotSpell* create() {
            return il2cpp::create_object<app::SeinChargeShotSpell>(get_class());
        }
    } // namespace SeinChargeShotSpell
} // namespace app::classes::types
