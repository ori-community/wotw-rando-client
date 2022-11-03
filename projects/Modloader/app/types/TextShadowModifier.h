#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextShadowModifier {
        namespace {
            inline app::TextShadowModifier__Class* type_info_ref = nullptr;
        }
        inline app::TextShadowModifier__Class** type_info = &type_info_ref;
        inline app::TextShadowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextShadowModifier__Class>(type_info, "", "TextShadowModifier");
        }
        inline app::TextShadowModifier* create() {
            return il2cpp::create_object<app::TextShadowModifier>(get_class());
        }
    } // namespace TextShadowModifier
} // namespace app::classes::types
