#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextAnimDistortModifier {
        namespace {
            app::TextAnimDistortModifier__Class* type_info_ref = nullptr;
        }
        app::TextAnimDistortModifier__Class** type_info = &type_info_ref;
        inline app::TextAnimDistortModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimDistortModifier__Class>(type_info, "", "TextAnimDistortModifier");
        }
        inline app::TextAnimDistortModifier* create() {
            return il2cpp::create_object<app::TextAnimDistortModifier>(get_class());
        }
    } // namespace TextAnimDistortModifier
} // namespace app::classes::types
