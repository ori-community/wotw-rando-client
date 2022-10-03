#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCutsceneMovement {
        namespace {
            app::SeinCutsceneMovement__Class* type_info_ref = nullptr;
        }
        app::SeinCutsceneMovement__Class** type_info = &type_info_ref;
        inline app::SeinCutsceneMovement__Class* get_class() {
            return il2cpp::get_class<app::SeinCutsceneMovement__Class>(type_info, "", "SeinCutsceneMovement");
        }
        inline app::SeinCutsceneMovement* create() {
            return il2cpp::create_object<app::SeinCutsceneMovement>(get_class());
        }
    } // namespace SeinCutsceneMovement
} // namespace app::classes::types
