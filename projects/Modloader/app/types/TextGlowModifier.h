#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextGlowModifier {
        namespace {
            inline app::TextGlowModifier__Class* type_info_ref = nullptr;
        }
        inline app::TextGlowModifier__Class** type_info = &type_info_ref;
        inline app::TextGlowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextGlowModifier__Class>(type_info, "", "TextGlowModifier");
        }
        inline app::TextGlowModifier* create() {
            return il2cpp::create_object<app::TextGlowModifier>(get_class());
        }
    } // namespace TextGlowModifier
} // namespace app::classes::types
