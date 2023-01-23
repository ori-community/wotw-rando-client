#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ESNetSocketState__Enum__Class.h>
#include <Modloader/app/structs/ESNetSocketState__Enum.h>

namespace app::classes::types {
    namespace ESNetSocketState__Enum {
        namespace {
            inline app::ESNetSocketState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ESNetSocketState__Enum__Class** type_info = &type_info_ref;
        inline app::ESNetSocketState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESNetSocketState__Enum__Class>(type_info, "Steamworks", "ESNetSocketState");
        }
        inline app::ESNetSocketState__Enum* create() {
            return il2cpp::create_object<app::ESNetSocketState__Enum>(get_class());
        }
    } // namespace ESNetSocketState__Enum
} // namespace app::classes::types
