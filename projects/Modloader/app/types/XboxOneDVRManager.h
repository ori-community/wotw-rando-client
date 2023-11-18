#pragma once
#include <Modloader/app/structs/XboxOneDVRManager.h>
#include <Modloader/app/structs/XboxOneDVRManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneDVRManager {
        inline app::XboxOneDVRManager__Class** type_info() {
            static app::XboxOneDVRManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneDVRManager__Class**)(modloader::win::memory::resolve_rva(0x04701548));
            }
            return cache;
        }
        inline app::XboxOneDVRManager__Class* get_class() {
            return il2cpp::get_class<app::XboxOneDVRManager__Class>(type_info(), "", "XboxOneDVRManager");
        }
        inline app::XboxOneDVRManager* create() {
            return il2cpp::create_object<app::XboxOneDVRManager>(get_class());
        }
    } // namespace XboxOneDVRManager
} // namespace app::classes::types
