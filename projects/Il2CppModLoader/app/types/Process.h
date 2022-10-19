#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Process {
        inline app::Process__Class** type_info = (app::Process__Class**)(modloader::win::memory::resolve_rva(0x04732290));
        inline app::Process__Class* get_class() {
            return il2cpp::get_class<app::Process__Class>(type_info, "System.Diagnostics", "Process");
        }
        inline app::Process* create() {
            return il2cpp::create_object<app::Process>(get_class());
        }
    } // namespace Process
} // namespace app::classes::types
