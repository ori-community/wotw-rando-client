#pragma once
#include <Modloader/app/structs/NPCMessageBoxModifier.h>
#include <Modloader/app/structs/NPCMessageBoxModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCMessageBoxModifier {
        inline app::NPCMessageBoxModifier__Class** type_info() {
            static app::NPCMessageBoxModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCMessageBoxModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCMessageBoxModifier__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBoxModifier__Class>(type_info(), "", "NPCMessageBoxModifier");
        }
        inline app::NPCMessageBoxModifier* create() {
            return il2cpp::create_object<app::NPCMessageBoxModifier>(get_class());
        }
    } // namespace NPCMessageBoxModifier
} // namespace app::classes::types
