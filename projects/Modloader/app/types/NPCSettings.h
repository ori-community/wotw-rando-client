#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NPCSettings__Class.h>
#include <Modloader/app/structs/NPCSettings.h>

namespace app::classes::types {
    namespace NPCSettings {
        namespace {
            inline app::NPCSettings__Class* type_info_ref = nullptr;
        }
        inline app::NPCSettings__Class** type_info = &type_info_ref;
        inline app::NPCSettings__Class* get_class() {
            return il2cpp::get_class<app::NPCSettings__Class>(type_info, "Moon", "NPCSettings");
        }
        inline app::NPCSettings* create() {
            return il2cpp::create_object<app::NPCSettings>(get_class());
        }
    } // namespace NPCSettings
} // namespace app::classes::types
