#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskDissolveModifier {
        namespace {
            app::MaskDissolveModifier__Class* type_info_ref = nullptr;
        }
        app::MaskDissolveModifier__Class** type_info = &type_info_ref;
        inline app::MaskDissolveModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskDissolveModifier__Class>(type_info, "", "MaskDissolveModifier");
        }
        inline app::MaskDissolveModifier* create() {
            return il2cpp::create_object<app::MaskDissolveModifier>(get_class());
        }
    } // namespace MaskDissolveModifier
} // namespace app::classes::types
