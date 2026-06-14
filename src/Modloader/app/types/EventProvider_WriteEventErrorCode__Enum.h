#pragma once
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum.h>
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_WriteEventErrorCode__Enum {
        inline app::EventProvider_WriteEventErrorCode__Enum__Class** type_info() {
            static app::EventProvider_WriteEventErrorCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventProvider_WriteEventErrorCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventProvider_WriteEventErrorCode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_WriteEventErrorCode__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider", "WriteEventErrorCode");
        }
        inline app::EventProvider_WriteEventErrorCode__Enum* create() {
            return il2cpp::create_object<app::EventProvider_WriteEventErrorCode__Enum>(get_class());
        }
    } // namespace EventProvider_WriteEventErrorCode__Enum
} // namespace app::classes::types
