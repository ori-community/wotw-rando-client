#pragma once
#include <Modloader/app/structs/ResumeGameController.h>
#include <Modloader/app/structs/ResumeGameController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResumeGameController {
        inline app::ResumeGameController__Class** type_info() {
            static app::ResumeGameController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResumeGameController__Class**)(modloader::win::memory::resolve_rva(0x04731E88));
            }
            return cache;
        }
        inline app::ResumeGameController__Class* get_class() {
            return il2cpp::get_class<app::ResumeGameController__Class>(type_info(), "", "ResumeGameController");
        }
        inline app::ResumeGameController* create() {
            return il2cpp::create_object<app::ResumeGameController>(get_class());
        }
    } // namespace ResumeGameController
} // namespace app::classes::types
