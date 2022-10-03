#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextAnimFadeModifier {
        namespace {
            app::TextAnimFadeModifier__Class* type_info_ref = nullptr;
        }
        app::TextAnimFadeModifier__Class** type_info = &type_info_ref;
        inline app::TextAnimFadeModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimFadeModifier__Class>(type_info, "", "TextAnimFadeModifier");
        }
        inline app::TextAnimFadeModifier* create() {
            return il2cpp::create_object<app::TextAnimFadeModifier>(get_class());
        }
    } // namespace TextAnimFadeModifier
} // namespace app::classes::types
