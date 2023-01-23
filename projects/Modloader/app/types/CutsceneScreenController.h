#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CutsceneScreenController__Class.h>
#include <Modloader/app/structs/CutsceneScreenController.h>

namespace app::classes::types {
    namespace CutsceneScreenController {
        inline app::CutsceneScreenController__Class** type_info = (app::CutsceneScreenController__Class**)(modloader::win::memory::resolve_rva(0x047991C8));
        inline app::CutsceneScreenController__Class* get_class() {
            return il2cpp::get_class<app::CutsceneScreenController__Class>(type_info, "", "CutsceneScreenController");
        }
        inline app::CutsceneScreenController* create() {
            return il2cpp::create_object<app::CutsceneScreenController>(get_class());
        }
    } // namespace CutsceneScreenController
} // namespace app::classes::types
