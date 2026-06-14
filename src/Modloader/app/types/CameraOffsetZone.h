#pragma once
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/CameraOffsetZone__Array.h>
#include <Modloader/app/structs/CameraOffsetZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetZone {
        inline app::CameraOffsetZone__Class** type_info() {
            static app::CameraOffsetZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraOffsetZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraOffsetZone__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetZone__Class>(type_info(), "", "CameraOffsetZone");
        }
        inline app::CameraOffsetZone* create() {
            return il2cpp::create_object<app::CameraOffsetZone>(get_class());
        }
        inline app::CameraOffsetZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraOffsetZone__Array>(get_class(), size);
        }
        inline app::CameraOffsetZone__Array* create_array(const std::vector<app::CameraOffsetZone*>& items) {
            return il2cpp::array_new<app::CameraOffsetZone__Array>(get_class(), items);
        }
    } // namespace CameraOffsetZone
} // namespace app::classes::types
