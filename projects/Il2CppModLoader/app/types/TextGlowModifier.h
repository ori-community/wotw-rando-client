#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextGlowModifier {
        namespace {
            app::TextGlowModifier__Class* type_info_ref = nullptr;
        }
        app::TextGlowModifier__Class** type_info = &type_info_ref;
        inline app::TextGlowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextGlowModifier__Class>(type_info, "", "TextGlowModifier");
        }
        inline app::TextGlowModifier* create() {
            return il2cpp::create_object<app::TextGlowModifier>(get_class());
        }
    } // namespace TextGlowModifier
} // namespace app::classes::types
