#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeparationMapModifier {
        namespace {
            inline app::SeparationMapModifier__Class* type_info_ref = nullptr;
        }
        inline app::SeparationMapModifier__Class** type_info = &type_info_ref;
        inline app::SeparationMapModifier__Class* get_class() {
            return il2cpp::get_class<app::SeparationMapModifier__Class>(type_info, "", "SeparationMapModifier");
        }
        inline app::SeparationMapModifier* create() {
            return il2cpp::create_object<app::SeparationMapModifier>(get_class());
        }
    } // namespace SeparationMapModifier
} // namespace app::classes::types
