#pragma once
#include <Modloader/app/structs/Uri_Flags__Enum.h>
#include <Modloader/app/structs/Uri_Flags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Uri_Flags__Enum {
        inline app::Uri_Flags__Enum__Class** type_info() {
            static app::Uri_Flags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Uri_Flags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Uri_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_Flags__Enum__Class>(type_info(), "System", "Uri", "Flags");
        }
        inline app::Uri_Flags__Enum* create() {
            return il2cpp::create_object<app::Uri_Flags__Enum>(get_class());
        }
    } // namespace Uri_Flags__Enum
} // namespace app::classes::types
