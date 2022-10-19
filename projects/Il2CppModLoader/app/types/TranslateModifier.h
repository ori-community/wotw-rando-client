#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TranslateModifier {
        namespace {
            inline app::TranslateModifier__Class* type_info_ref = nullptr;
        }
        inline app::TranslateModifier__Class** type_info = &type_info_ref;
        inline app::TranslateModifier__Class* get_class() {
            return il2cpp::get_class<app::TranslateModifier__Class>(type_info, "", "TranslateModifier");
        }
        inline app::TranslateModifier* create() {
            return il2cpp::create_object<app::TranslateModifier>(get_class());
        }
    } // namespace TranslateModifier
} // namespace app::classes::types
