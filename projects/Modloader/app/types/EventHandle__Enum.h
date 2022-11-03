#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventHandle__Enum {
        namespace {
            inline app::EventHandle__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventHandle__Enum__Class** type_info = &type_info_ref;
        inline app::EventHandle__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventHandle__Enum__Class>(type_info, "UnityEngine.EventSystems", "EventHandle");
        }
        inline app::EventHandle__Enum* create() {
            return il2cpp::create_object<app::EventHandle__Enum>(get_class());
        }
    } // namespace EventHandle__Enum
} // namespace app::classes::types
