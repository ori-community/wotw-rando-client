#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLightSpell {
        namespace {
            inline app::SeinLightSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinLightSpell__Class** type_info = &type_info_ref;
        inline app::SeinLightSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLightSpell__Class>(type_info, "", "SeinLightSpell");
        }
        inline app::SeinLightSpell* create() {
            return il2cpp::create_object<app::SeinLightSpell>(get_class());
        }
    } // namespace SeinLightSpell
} // namespace app::classes::types
