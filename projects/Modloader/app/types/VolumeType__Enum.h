#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumeType__Enum__Class.h>
#include <Modloader/app/structs/VolumeType__Enum.h>

namespace app::classes::types {
    namespace VolumeType__Enum {
        namespace {
            inline app::VolumeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VolumeType__Enum__Class** type_info = &type_info_ref;
        inline app::VolumeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::VolumeType__Enum__Class>(type_info, "Moon", "VolumeType");
        }
        inline app::VolumeType__Enum* create() {
            return il2cpp::create_object<app::VolumeType__Enum>(get_class());
        }
    } // namespace VolumeType__Enum
} // namespace app::classes::types
