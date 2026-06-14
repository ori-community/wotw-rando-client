#pragma once
#include <Modloader/app/structs/GameSettings.h>
#include <Modloader/app/structs/GameSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameSettings {
        inline app::GameSettings__Class** type_info() {
            static app::GameSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameSettings__Class**)(modloader::win::memory::resolve_rva(0x0478D378));
            }
            return cache;
        }
        inline app::GameSettings__Class* get_class() {
            return il2cpp::get_class<app::GameSettings__Class>(type_info(), "", "GameSettings");
        }
        inline app::GameSettings* create() {
            return il2cpp::create_object<app::GameSettings>(get_class());
        }
    } // namespace GameSettings
} // namespace app::classes::types
