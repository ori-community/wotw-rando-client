#pragma once
#include <Modloader/app/structs/DepthOfFieldController.h>
#include <Modloader/app/structs/DepthOfFieldController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldController {
        inline app::DepthOfFieldController__Class** type_info() {
            static app::DepthOfFieldController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DepthOfFieldController__Class**)(modloader::win::memory::resolve_rva(0x0476E3C8));
            }
            return cache;
        }
        inline app::DepthOfFieldController__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldController__Class>(type_info(), "", "DepthOfFieldController");
        }
        inline app::DepthOfFieldController* create() {
            return il2cpp::create_object<app::DepthOfFieldController>(get_class());
        }
    } // namespace DepthOfFieldController
} // namespace app::classes::types
