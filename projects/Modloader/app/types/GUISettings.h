#pragma once
#include <Modloader/app/structs/GUISettings.h>
#include <Modloader/app/structs/GUISettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUISettings {
        inline app::GUISettings__Class** type_info() {
            static app::GUISettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUISettings__Class**)(modloader::win::memory::resolve_rva(0x0470EB00));
            }
            return cache;
        }
        inline app::GUISettings__Class* get_class() {
            return il2cpp::get_class<app::GUISettings__Class>(type_info(), "UnityEngine", "GUISettings");
        }
        inline app::GUISettings* create() {
            return il2cpp::create_object<app::GUISettings>(get_class());
        }
    } // namespace GUISettings
} // namespace app::classes::types
