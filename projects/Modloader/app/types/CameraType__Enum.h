#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraType__Enum__Class.h>
#include <Modloader/app/structs/CameraType__Enum.h>

namespace app::classes::types {
    namespace CameraType__Enum {
        namespace {
            inline app::CameraType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraType__Enum__Class** type_info = &type_info_ref;
        inline app::CameraType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraType__Enum__Class>(type_info, "UnityEngine", "CameraType");
        }
        inline app::CameraType__Enum* create() {
            return il2cpp::create_object<app::CameraType__Enum>(get_class());
        }
    } // namespace CameraType__Enum
} // namespace app::classes::types
