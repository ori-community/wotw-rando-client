#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextAnimGlowModifier {
        namespace {
            inline app::TextAnimGlowModifier__Class* type_info_ref = nullptr;
        }
        inline app::TextAnimGlowModifier__Class** type_info = &type_info_ref;
        inline app::TextAnimGlowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimGlowModifier__Class>(type_info, "", "TextAnimGlowModifier");
        }
        inline app::TextAnimGlowModifier* create() {
            return il2cpp::create_object<app::TextAnimGlowModifier>(get_class());
        }
    } // namespace TextAnimGlowModifier
} // namespace app::classes::types
