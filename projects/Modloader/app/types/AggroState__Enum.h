#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AggroState__Enum {
        namespace {
            inline app::AggroState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AggroState__Enum__Class** type_info = &type_info_ref;
        inline app::AggroState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AggroState__Enum__Class>(type_info, "", "AggroState");
        }
        inline app::AggroState__Enum* create() {
            return il2cpp::create_object<app::AggroState__Enum>(get_class());
        }
    } // namespace AggroState__Enum
} // namespace app::classes::types
