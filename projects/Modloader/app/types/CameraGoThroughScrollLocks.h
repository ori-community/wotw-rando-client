#pragma once
#include <Modloader/app/structs/CameraGoThroughScrollLocks.h>
#include <Modloader/app/structs/CameraGoThroughScrollLocks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraGoThroughScrollLocks {
        inline app::CameraGoThroughScrollLocks__Class** type_info() {
            static app::CameraGoThroughScrollLocks__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraGoThroughScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04754D68));
            }
            return cache;
        }
        inline app::CameraGoThroughScrollLocks__Class* get_class() {
            return il2cpp::get_class<app::CameraGoThroughScrollLocks__Class>(type_info(), "", "CameraGoThroughScrollLocks");
        }
        inline app::CameraGoThroughScrollLocks* create() {
            return il2cpp::create_object<app::CameraGoThroughScrollLocks>(get_class());
        }
    } // namespace CameraGoThroughScrollLocks
} // namespace app::classes::types
