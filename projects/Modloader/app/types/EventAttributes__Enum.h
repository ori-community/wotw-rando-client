#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventAttributes__Enum__Class.h>
#include <Modloader/app/structs/EventAttributes__Enum.h>

namespace app::classes::types {
    namespace EventAttributes__Enum {
        namespace {
            inline app::EventAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::EventAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventAttributes__Enum__Class>(type_info, "System.Reflection", "EventAttributes");
        }
        inline app::EventAttributes__Enum* create() {
            return il2cpp::create_object<app::EventAttributes__Enum>(get_class());
        }
    } // namespace EventAttributes__Enum
} // namespace app::classes::types
