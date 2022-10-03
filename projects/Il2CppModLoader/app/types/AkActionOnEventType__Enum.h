#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkActionOnEventType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkActionOnEventType__Enum__Class** type_info;
        inline app::AkActionOnEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkActionOnEventType__Enum__Class>(type_info, "", "AkActionOnEventType");
        }
        inline app::AkActionOnEventType__Enum* create() {
            return il2cpp::create_object<app::AkActionOnEventType__Enum>(get_class());
        }
    } // namespace AkActionOnEventType__Enum
} // namespace app::classes::types
