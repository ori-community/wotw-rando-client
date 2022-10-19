#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCMessageBoxModifier {
        namespace {
            inline app::NPCMessageBoxModifier__Class* type_info_ref = nullptr;
        }
        inline app::NPCMessageBoxModifier__Class** type_info = &type_info_ref;
        inline app::NPCMessageBoxModifier__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBoxModifier__Class>(type_info, "", "NPCMessageBoxModifier");
        }
        inline app::NPCMessageBoxModifier* create() {
            return il2cpp::create_object<app::NPCMessageBoxModifier>(get_class());
        }
    } // namespace NPCMessageBoxModifier
} // namespace app::classes::types
