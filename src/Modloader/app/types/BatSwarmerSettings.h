#pragma once
#include <Modloader/app/structs/BatSwarmerSettings.h>
#include <Modloader/app/structs/BatSwarmerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatSwarmerSettings {
        inline app::BatSwarmerSettings__Class** type_info() {
            static app::BatSwarmerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BatSwarmerSettings__Class**)(modloader::win::memory::resolve_rva(0x04789668));
            }
            return cache;
        }
        inline app::BatSwarmerSettings__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmerSettings__Class>(type_info(), "", "BatSwarmerSettings");
        }
        inline app::BatSwarmerSettings* create() {
            return il2cpp::create_object<app::BatSwarmerSettings>(get_class());
        }
    } // namespace BatSwarmerSettings
} // namespace app::classes::types
