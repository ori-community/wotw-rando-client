#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CursorMode__Enum__Class.h>
#include <Modloader/app/structs/CursorMode__Enum.h>

namespace app::classes::types {
    namespace CursorMode__Enum {
        namespace {
            inline app::CursorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CursorMode__Enum__Class** type_info = &type_info_ref;
        inline app::CursorMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CursorMode__Enum__Class>(type_info, "UnityEngine", "CursorMode");
        }
        inline app::CursorMode__Enum* create() {
            return il2cpp::create_object<app::CursorMode__Enum>(get_class());
        }
    } // namespace CursorMode__Enum
} // namespace app::classes::types
