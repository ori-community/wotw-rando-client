#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SendMessageOptions__Enum__Class.h>
#include <Modloader/app/structs/SendMessageOptions__Enum.h>

namespace app::classes::types {
    namespace SendMessageOptions__Enum {
        namespace {
            inline app::SendMessageOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SendMessageOptions__Enum__Class** type_info = &type_info_ref;
        inline app::SendMessageOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SendMessageOptions__Enum__Class>(type_info, "UnityEngine", "SendMessageOptions");
        }
        inline app::SendMessageOptions__Enum* create() {
            return il2cpp::create_object<app::SendMessageOptions__Enum>(get_class());
        }
    } // namespace SendMessageOptions__Enum
} // namespace app::classes::types
