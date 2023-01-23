#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrashContext_Flags__Enum__Class.h>
#include <Modloader/app/structs/CrashContext_Flags__Enum.h>

namespace app::classes::types {
    namespace CrashContext_Flags__Enum {
        namespace {
            inline app::CrashContext_Flags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CrashContext_Flags__Enum__Class** type_info = &type_info_ref;
        inline app::CrashContext_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Flags__Enum__Class>(type_info, "Moon", "CrashContext", "Flags");
        }
        inline app::CrashContext_Flags__Enum* create() {
            return il2cpp::create_object<app::CrashContext_Flags__Enum>(get_class());
        }
    } // namespace CrashContext_Flags__Enum
} // namespace app::classes::types
