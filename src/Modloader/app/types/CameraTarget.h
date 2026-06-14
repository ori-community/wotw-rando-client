#pragma once
#include <Modloader/app/structs/CameraTarget.h>
#include <Modloader/app/structs/CameraTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraTarget {
        inline app::CameraTarget__Class** type_info() {
            static app::CameraTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraTarget__Class**)(modloader::win::memory::resolve_rva(0x047630E0));
            }
            return cache;
        }
        inline app::CameraTarget__Class* get_class() {
            return il2cpp::get_class<app::CameraTarget__Class>(type_info(), "", "CameraTarget");
        }
        inline app::CameraTarget* create() {
            return il2cpp::create_object<app::CameraTarget>(get_class());
        }
    } // namespace CameraTarget
} // namespace app::classes::types
