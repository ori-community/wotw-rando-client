#pragma once
#include <Modloader/app/structs/ExecutionContext_CaptureOptions__Enum.h>
#include <Modloader/app/structs/ExecutionContext_CaptureOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecutionContext_CaptureOptions__Enum {
        inline app::ExecutionContext_CaptureOptions__Enum__Class** type_info() {
            static app::ExecutionContext_CaptureOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExecutionContext_CaptureOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExecutionContext_CaptureOptions__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ExecutionContext_CaptureOptions__Enum__Class>(type_info(), "System.Threading", "ExecutionContext", "CaptureOptions");
        }
        inline app::ExecutionContext_CaptureOptions__Enum* create() {
            return il2cpp::create_object<app::ExecutionContext_CaptureOptions__Enum>(get_class());
        }
    } // namespace ExecutionContext_CaptureOptions__Enum
} // namespace app::classes::types
