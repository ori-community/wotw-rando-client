#pragma once
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinController3D_EventId__Enum {
        inline app::SeinController3D_EventId__Enum__Class** type_info() {
            static app::SeinController3D_EventId__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinController3D_EventId__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinController3D_EventId__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinController3D_EventId__Enum__Class>(type_info(), "", "SeinController3D", "EventId");
        }
        inline app::SeinController3D_EventId__Enum* create() {
            return il2cpp::create_object<app::SeinController3D_EventId__Enum>(get_class());
        }
    } // namespace SeinController3D_EventId__Enum
} // namespace app::classes::types
