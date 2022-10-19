#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendril_AllowedTendrilVariations {
        namespace {
            inline app::KwolokBossTendril_AllowedTendrilVariations__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTendril_AllowedTendrilVariations__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendril_AllowedTendrilVariations__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendril_AllowedTendrilVariations__Class>(type_info, "", "KwolokBossTendril", "AllowedTendrilVariations");
        }
        inline app::KwolokBossTendril_AllowedTendrilVariations* create() {
            return il2cpp::create_object<app::KwolokBossTendril_AllowedTendrilVariations>(get_class());
        }
    } // namespace KwolokBossTendril_AllowedTendrilVariations
} // namespace app::classes::types
