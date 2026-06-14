#pragma once
#include <Modloader/app/structs/HoloLensController.h>
#include <Modloader/app/structs/HoloLensController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoloLensController {
        inline app::HoloLensController__Class** type_info() {
            static app::HoloLensController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HoloLensController__Class**)(modloader::win::memory::resolve_rva(0x0478C690));
            }
            return cache;
        }
        inline app::HoloLensController__Class* get_class() {
            return il2cpp::get_class<app::HoloLensController__Class>(type_info(), "", "HoloLensController");
        }
        inline app::HoloLensController* create() {
            return il2cpp::create_object<app::HoloLensController>(get_class());
        }
    } // namespace HoloLensController
} // namespace app::classes::types
