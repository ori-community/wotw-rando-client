#pragma once
#include <Modloader/app/structs/CameraCrossFadeManager.h>
#include <Modloader/app/structs/CameraCrossFadeManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraCrossFadeManager {
        inline app::CameraCrossFadeManager__Class** type_info() {
            static app::CameraCrossFadeManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraCrossFadeManager__Class**)(modloader::win::memory::resolve_rva(0x04742730));
            }
            return cache;
        }
        inline app::CameraCrossFadeManager__Class* get_class() {
            return il2cpp::get_class<app::CameraCrossFadeManager__Class>(type_info(), "", "CameraCrossFadeManager");
        }
        inline app::CameraCrossFadeManager* create() {
            return il2cpp::create_object<app::CameraCrossFadeManager>(get_class());
        }
    } // namespace CameraCrossFadeManager
} // namespace app::classes::types
