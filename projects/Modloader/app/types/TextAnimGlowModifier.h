#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextAnimGlowModifier__Class.h>
#include <Modloader/app/structs/TextAnimGlowModifier.h>

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
