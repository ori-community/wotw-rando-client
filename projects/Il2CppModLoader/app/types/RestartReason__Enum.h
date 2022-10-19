#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestartReason__Enum {
        inline app::RestartReason__Enum__Class** type_info = (app::RestartReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470CB58));
        inline app::RestartReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RestartReason__Enum__Class>(type_info, "", "RestartReason");
        }
        inline app::RestartReason__Enum* create() {
            return il2cpp::create_object<app::RestartReason__Enum>(get_class());
        }
    } // namespace RestartReason__Enum
} // namespace app::classes::types
