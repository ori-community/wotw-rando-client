#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraOffsetZone__Class.h>
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/CameraOffsetZone__Array.h>

namespace app::classes::types {
    namespace CameraOffsetZone {
        namespace {
            inline app::CameraOffsetZone__Class* type_info_ref = nullptr;
        }
        inline app::CameraOffsetZone__Class** type_info = &type_info_ref;
        inline app::CameraOffsetZone__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetZone__Class>(type_info, "", "CameraOffsetZone");
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
