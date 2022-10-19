#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritFlareSpell {
        namespace {
            inline app::SeinSpiritFlareSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritFlareSpell__Class** type_info = &type_info_ref;
        inline app::SeinSpiritFlareSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlareSpell__Class>(type_info, "", "SeinSpiritFlareSpell");
        }
        inline app::SeinSpiritFlareSpell* create() {
            return il2cpp::create_object<app::SeinSpiritFlareSpell>(get_class());
        }
    } // namespace SeinSpiritFlareSpell
} // namespace app::classes::types
