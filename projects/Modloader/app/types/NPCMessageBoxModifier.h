#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NPCMessageBoxModifier__Class.h>
#include <Modloader/app/structs/NPCMessageBoxModifier.h>

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
