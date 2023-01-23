#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinCutsceneMovement__Class.h>
#include <Modloader/app/structs/SeinCutsceneMovement.h>

namespace app::classes::types {
    namespace SeinCutsceneMovement {
        namespace {
            inline app::SeinCutsceneMovement__Class* type_info_ref = nullptr;
        }
        inline app::SeinCutsceneMovement__Class** type_info = &type_info_ref;
        inline app::SeinCutsceneMovement__Class* get_class() {
            return il2cpp::get_class<app::SeinCutsceneMovement__Class>(type_info, "", "SeinCutsceneMovement");
        }
        inline app::SeinCutsceneMovement* create() {
            return il2cpp::create_object<app::SeinCutsceneMovement>(get_class());
        }
    } // namespace SeinCutsceneMovement
} // namespace app::classes::types
