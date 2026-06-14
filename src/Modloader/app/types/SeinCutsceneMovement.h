#pragma once
#include <Modloader/app/structs/SeinCutsceneMovement.h>
#include <Modloader/app/structs/SeinCutsceneMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCutsceneMovement {
        inline app::SeinCutsceneMovement__Class** type_info() {
            static app::SeinCutsceneMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCutsceneMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCutsceneMovement__Class* get_class() {
            return il2cpp::get_class<app::SeinCutsceneMovement__Class>(type_info(), "", "SeinCutsceneMovement");
        }
        inline app::SeinCutsceneMovement* create() {
            return il2cpp::create_object<app::SeinCutsceneMovement>(get_class());
        }
    } // namespace SeinCutsceneMovement
} // namespace app::classes::types
