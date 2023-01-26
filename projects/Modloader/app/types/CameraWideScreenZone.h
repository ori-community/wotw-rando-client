#pragma once
#include <Modloader/app/structs/CameraWideScreenZone.h>
#include <Modloader/app/structs/CameraWideScreenZone__Array.h>
#include <Modloader/app/structs/CameraWideScreenZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraWideScreenZone {
        inline app::CameraWideScreenZone__Class** type_info() {
            static app::CameraWideScreenZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraWideScreenZone__Class**)(modloader::win::memory::resolve_rva(0x04758B58));
            }
            return cache;
        }
        inline app::CameraWideScreenZone__Class* get_class() {
            return il2cpp::get_class<app::CameraWideScreenZone__Class>(type_info(), "", "CameraWideScreenZone");
        }
        inline app::CameraWideScreenZone* create() {
            return il2cpp::create_object<app::CameraWideScreenZone>(get_class());
        }
        inline app::CameraWideScreenZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraWideScreenZone__Array>(get_class(), size);
        }
        inline app::CameraWideScreenZone__Array* create_array(const std::vector<app::CameraWideScreenZone*>& items) {
            return il2cpp::array_new<app::CameraWideScreenZone__Array>(get_class(), items);
        }
    } // namespace CameraWideScreenZone
} // namespace app::classes::types
