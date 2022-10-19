#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedSeinEffectsMap {
        namespace {
            inline app::MaterialBasedSeinEffectsMap__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedSeinEffectsMap__Class** type_info = &type_info_ref;
        inline app::MaterialBasedSeinEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinEffectsMap__Class>(type_info, "", "MaterialBasedSeinEffectsMap");
        }
        inline app::MaterialBasedSeinEffectsMap* create() {
            return il2cpp::create_object<app::MaterialBasedSeinEffectsMap>(get_class());
        }
    } // namespace MaterialBasedSeinEffectsMap
} // namespace app::classes::types
