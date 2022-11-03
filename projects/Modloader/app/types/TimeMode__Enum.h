#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeMode__Enum {
        namespace {
            inline app::TimeMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimeMode__Enum__Class** type_info = &type_info_ref;
        inline app::TimeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeMode__Enum__Class>(type_info, "", "TimeMode");
        }
        inline app::TimeMode__Enum* create() {
            return il2cpp::create_object<app::TimeMode__Enum>(get_class());
        }
    } // namespace TimeMode__Enum
} // namespace app::classes::types
