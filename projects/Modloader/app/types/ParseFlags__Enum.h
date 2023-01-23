#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParseFlags__Enum__Class.h>
#include <Modloader/app/structs/ParseFlags__Enum.h>

namespace app::classes::types {
    namespace ParseFlags__Enum {
        namespace {
            inline app::ParseFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParseFlags__Enum__Class** type_info = &type_info_ref;
        inline app::ParseFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseFlags__Enum__Class>(type_info, "System", "ParseFlags");
        }
        inline app::ParseFlags__Enum* create() {
            return il2cpp::create_object<app::ParseFlags__Enum>(get_class());
        }
    } // namespace ParseFlags__Enum
} // namespace app::classes::types
