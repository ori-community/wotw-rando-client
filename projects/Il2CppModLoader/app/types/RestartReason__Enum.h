#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestartReason__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RestartReason__Enum__Class** type_info;
        inline app::RestartReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RestartReason__Enum__Class>(type_info, "", "RestartReason");
        }
        inline app::RestartReason__Enum* create() {
            return il2cpp::create_object<app::RestartReason__Enum>(get_class());
        }
    } // namespace RestartReason__Enum
} // namespace app::classes::types
