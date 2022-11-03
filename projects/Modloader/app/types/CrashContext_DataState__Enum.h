#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrashContext_DataState__Enum {
        namespace {
            inline app::CrashContext_DataState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CrashContext_DataState__Enum__Class** type_info = &type_info_ref;
        inline app::CrashContext_DataState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_DataState__Enum__Class>(type_info, "Moon", "CrashContext", "DataState");
        }
        inline app::CrashContext_DataState__Enum* create() {
            return il2cpp::create_object<app::CrashContext_DataState__Enum>(get_class());
        }
    } // namespace CrashContext_DataState__Enum
} // namespace app::classes::types
