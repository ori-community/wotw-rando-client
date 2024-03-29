#pragma once
#include <Modloader/app/structs/UberSwarmerSettings.h>
#include <Modloader/app/structs/UberSwarmerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmerSettings {
        inline app::UberSwarmerSettings__Class** type_info() {
            static app::UberSwarmerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarmerSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarmerSettings__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmerSettings__Class>(type_info(), "", "UberSwarmerSettings");
        }
        inline app::UberSwarmerSettings* create() {
            return il2cpp::create_object<app::UberSwarmerSettings>(get_class());
        }
    } // namespace UberSwarmerSettings
} // namespace app::classes::types
