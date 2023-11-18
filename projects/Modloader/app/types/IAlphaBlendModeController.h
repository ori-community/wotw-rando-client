#pragma once
#include <Modloader/app/structs/IAlphaBlendModeController.h>
#include <Modloader/app/structs/IAlphaBlendModeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAlphaBlendModeController {
        inline app::IAlphaBlendModeController__Class** type_info() {
            static app::IAlphaBlendModeController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAlphaBlendModeController__Class**)(modloader::win::memory::resolve_rva(0x04791090));
            }
            return cache;
        }
        inline app::IAlphaBlendModeController__Class* get_class() {
            return il2cpp::get_class<app::IAlphaBlendModeController__Class>(type_info(), "", "IAlphaBlendModeController");
        }
    } // namespace IAlphaBlendModeController
} // namespace app::classes::types
