#pragma once
#include <Modloader/app/structs/CameraPositionTracker.h>
#include <Modloader/app/structs/CameraPositionTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPositionTracker {
        inline app::CameraPositionTracker__Class** type_info() {
            static app::CameraPositionTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraPositionTracker__Class**)(modloader::win::memory::resolve_rva(0x04706CB0));
            }
            return cache;
        }
        inline app::CameraPositionTracker__Class* get_class() {
            return il2cpp::get_class<app::CameraPositionTracker__Class>(type_info(), "", "CameraPositionTracker");
        }
        inline app::CameraPositionTracker* create() {
            return il2cpp::create_object<app::CameraPositionTracker>(get_class());
        }
    } // namespace CameraPositionTracker
} // namespace app::classes::types
