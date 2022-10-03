#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Process {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Process__Class** type_info;
        inline app::Process__Class* get_class() {
            return il2cpp::get_class<app::Process__Class>(type_info, "System.Diagnostics", "Process");
        }
        inline app::Process* create() {
            return il2cpp::create_object<app::Process>(get_class());
        }
    } // namespace Process
} // namespace app::classes::types
