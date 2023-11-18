#pragma once
#include <Modloader/app/structs/WwiseEventSystem_EventStatus__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_EventStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_EventStatus__Enum {
        inline app::WwiseEventSystem_EventStatus__Enum__Class** type_info() {
            static app::WwiseEventSystem_EventStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseEventSystem_EventStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseEventSystem_EventStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_EventStatus__Enum__Class>(type_info(), "Moon.Wwise", "WwiseEventSystem", "EventStatus");
        }
        inline app::WwiseEventSystem_EventStatus__Enum* create() {
            return il2cpp::create_object<app::WwiseEventSystem_EventStatus__Enum>(get_class());
        }
    } // namespace WwiseEventSystem_EventStatus__Enum
} // namespace app::classes::types
