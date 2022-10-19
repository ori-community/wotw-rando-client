#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Required__Enum {
        namespace {
            inline app::Required__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Required__Enum__Class** type_info = &type_info_ref;
        inline app::Required__Enum__Class* get_class() {
            return il2cpp::get_class<app::Required__Enum__Class>(type_info, "Newtonsoft.Json", "Required");
        }
        inline app::Required__Enum* create() {
            return il2cpp::create_object<app::Required__Enum>(get_class());
        }
    } // namespace Required__Enum
} // namespace app::classes::types
