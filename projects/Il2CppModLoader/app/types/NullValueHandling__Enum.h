#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullValueHandling__Enum {
        namespace {
            inline app::NullValueHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NullValueHandling__Enum__Class** type_info = &type_info_ref;
        inline app::NullValueHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NullValueHandling__Enum__Class>(type_info, "Newtonsoft.Json", "NullValueHandling");
        }
        inline app::NullValueHandling__Enum* create() {
            return il2cpp::create_object<app::NullValueHandling__Enum>(get_class());
        }
    } // namespace NullValueHandling__Enum
} // namespace app::classes::types
