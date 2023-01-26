#pragma once
#include <Modloader/app/structs/CrashContext_Flags__Enum.h>
#include <Modloader/app/structs/CrashContext_Flags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrashContext_Flags__Enum {
        inline app::CrashContext_Flags__Enum__Class** type_info() {
            static app::CrashContext_Flags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrashContext_Flags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrashContext_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Flags__Enum__Class>(type_info(), "Moon", "CrashContext", "Flags");
        }
        inline app::CrashContext_Flags__Enum* create() {
            return il2cpp::create_object<app::CrashContext_Flags__Enum>(get_class());
        }
    } // namespace CrashContext_Flags__Enum
} // namespace app::classes::types
