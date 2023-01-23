#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAlphaBlendModeController__Class.h>

namespace app::classes::types {
    namespace IAlphaBlendModeController {
        inline app::IAlphaBlendModeController__Class** type_info = (app::IAlphaBlendModeController__Class**)(modloader::win::memory::resolve_rva(0x04791090));
        inline app::IAlphaBlendModeController__Class* get_class() {
            return il2cpp::get_class<app::IAlphaBlendModeController__Class>(type_info, "", "IAlphaBlendModeController");
        }
    } // namespace IAlphaBlendModeController
} // namespace app::classes::types
