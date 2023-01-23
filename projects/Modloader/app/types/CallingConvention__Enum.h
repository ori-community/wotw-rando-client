#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CallingConvention__Enum__Class.h>
#include <Modloader/app/structs/CallingConvention__Enum.h>

namespace app::classes::types {
    namespace CallingConvention__Enum {
        namespace {
            inline app::CallingConvention__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CallingConvention__Enum__Class** type_info = &type_info_ref;
        inline app::CallingConvention__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallingConvention__Enum__Class>(type_info, "System.Runtime.InteropServices", "CallingConvention");
        }
        inline app::CallingConvention__Enum* create() {
            return il2cpp::create_object<app::CallingConvention__Enum>(get_class());
        }
    } // namespace CallingConvention__Enum
} // namespace app::classes::types
