#pragma once
#include <Modloader/app/structs/AkFloorPlane__Enum.h>
#include <Modloader/app/structs/AkFloorPlane__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkFloorPlane__Enum {
        inline app::AkFloorPlane__Enum__Class** type_info() {
            static app::AkFloorPlane__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkFloorPlane__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkFloorPlane__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkFloorPlane__Enum__Class>(type_info(), "", "AkFloorPlane");
        }
        inline app::AkFloorPlane__Enum* create() {
            return il2cpp::create_object<app::AkFloorPlane__Enum>(get_class());
        }
    } // namespace AkFloorPlane__Enum
} // namespace app::classes::types
