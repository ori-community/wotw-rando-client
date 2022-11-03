#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveEventType__Enum {
        namespace {
            inline app::MoveEventType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoveEventType__Enum__Class** type_info = &type_info_ref;
        inline app::MoveEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoveEventType__Enum__Class>(type_info, "Moon.Timeline", "MoveEventType");
        }
        inline app::MoveEventType__Enum* create() {
            return il2cpp::create_object<app::MoveEventType__Enum>(get_class());
        }
    } // namespace MoveEventType__Enum
} // namespace app::classes::types
