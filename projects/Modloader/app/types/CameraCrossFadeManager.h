#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraCrossFadeManager {
        inline app::CameraCrossFadeManager__Class** type_info = (app::CameraCrossFadeManager__Class**)(modloader::win::memory::resolve_rva(0x04742730));
        inline app::CameraCrossFadeManager__Class* get_class() {
            return il2cpp::get_class<app::CameraCrossFadeManager__Class>(type_info, "", "CameraCrossFadeManager");
        }
        inline app::CameraCrossFadeManager* create() {
            return il2cpp::create_object<app::CameraCrossFadeManager>(get_class());
        }
    } // namespace CameraCrossFadeManager
} // namespace app::classes::types
