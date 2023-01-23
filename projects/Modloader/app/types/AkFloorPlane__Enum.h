#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkFloorPlane__Enum__Class.h>
#include <Modloader/app/structs/AkFloorPlane__Enum.h>

namespace app::classes::types {
    namespace AkFloorPlane__Enum {
        namespace {
            inline app::AkFloorPlane__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkFloorPlane__Enum__Class** type_info = &type_info_ref;
        inline app::AkFloorPlane__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkFloorPlane__Enum__Class>(type_info, "", "AkFloorPlane");
        }
        inline app::AkFloorPlane__Enum* create() {
            return il2cpp::create_object<app::AkFloorPlane__Enum>(get_class());
        }
    } // namespace AkFloorPlane__Enum
} // namespace app::classes::types
