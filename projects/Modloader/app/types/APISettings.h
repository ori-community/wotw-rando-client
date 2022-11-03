#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace APISettings {
        namespace {
            inline app::APISettings__Class* type_info_ref = nullptr;
        }
        inline app::APISettings__Class** type_info = &type_info_ref;
        inline app::APISettings__Class* get_class() {
            return il2cpp::get_class<app::APISettings__Class>(type_info, "PlayFab.PlayStreamModels", "APISettings");
        }
        inline app::APISettings* create() {
            return il2cpp::create_object<app::APISettings>(get_class());
        }
    } // namespace APISettings
} // namespace app::classes::types
