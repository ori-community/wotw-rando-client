#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberScreenMode__Enum {
        namespace {
            inline app::UberScreenMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberScreenMode__Enum__Class** type_info = &type_info_ref;
        inline app::UberScreenMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberScreenMode__Enum__Class>(type_info, "", "UberScreenMode");
        }
        inline app::UberScreenMode__Enum* create() {
            return il2cpp::create_object<app::UberScreenMode__Enum>(get_class());
        }
    } // namespace UberScreenMode__Enum
} // namespace app::classes::types
