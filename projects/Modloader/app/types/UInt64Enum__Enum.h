#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UInt64Enum__Enum__Class.h>
#include <Modloader/app/structs/UInt64Enum__Enum.h>

namespace app::classes::types {
    namespace UInt64Enum__Enum {
        namespace {
            inline app::UInt64Enum__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UInt64Enum__Enum__Class** type_info = &type_info_ref;
        inline app::UInt64Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::UInt64Enum__Enum__Class>(type_info, "System", "UInt64Enum");
        }
        inline app::UInt64Enum__Enum* create() {
            return il2cpp::create_object<app::UInt64Enum__Enum>(get_class());
        }
    } // namespace UInt64Enum__Enum
} // namespace app::classes::types
