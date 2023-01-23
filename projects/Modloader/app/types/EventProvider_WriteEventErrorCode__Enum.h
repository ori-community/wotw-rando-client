#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum__Class.h>
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum.h>

namespace app::classes::types {
    namespace EventProvider_WriteEventErrorCode__Enum {
        namespace {
            inline app::EventProvider_WriteEventErrorCode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EventProvider_WriteEventErrorCode__Enum__Class** type_info = &type_info_ref;
        inline app::EventProvider_WriteEventErrorCode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_WriteEventErrorCode__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider", "WriteEventErrorCode");
        }
        inline app::EventProvider_WriteEventErrorCode__Enum* create() {
            return il2cpp::create_object<app::EventProvider_WriteEventErrorCode__Enum>(get_class());
        }
    } // namespace EventProvider_WriteEventErrorCode__Enum
} // namespace app::classes::types
