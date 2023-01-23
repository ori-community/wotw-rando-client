#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebExceptionInternalStatus__Enum__Class.h>
#include <Modloader/app/structs/WebExceptionInternalStatus__Enum.h>

namespace app::classes::types {
    namespace WebExceptionInternalStatus__Enum {
        namespace {
            inline app::WebExceptionInternalStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WebExceptionInternalStatus__Enum__Class** type_info = &type_info_ref;
        inline app::WebExceptionInternalStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionInternalStatus__Enum__Class>(type_info, "System.Net", "WebExceptionInternalStatus");
        }
        inline app::WebExceptionInternalStatus__Enum* create() {
            return il2cpp::create_object<app::WebExceptionInternalStatus__Enum>(get_class());
        }
    } // namespace WebExceptionInternalStatus__Enum
} // namespace app::classes::types
