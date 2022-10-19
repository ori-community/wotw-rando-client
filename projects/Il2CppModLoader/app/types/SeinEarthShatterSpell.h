#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEarthShatterSpell {
        namespace {
            inline app::SeinEarthShatterSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinEarthShatterSpell__Class** type_info = &type_info_ref;
        inline app::SeinEarthShatterSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEarthShatterSpell__Class>(type_info, "", "SeinEarthShatterSpell");
        }
        inline app::SeinEarthShatterSpell* create() {
            return il2cpp::create_object<app::SeinEarthShatterSpell>(get_class());
        }
    } // namespace SeinEarthShatterSpell
} // namespace app::classes::types
