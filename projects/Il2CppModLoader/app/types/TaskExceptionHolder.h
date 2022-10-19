#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskExceptionHolder {
        inline app::TaskExceptionHolder__Class** type_info = (app::TaskExceptionHolder__Class**)(modloader::win::memory::resolve_rva(0x04756E18));
        inline app::TaskExceptionHolder__Class* get_class() {
            return il2cpp::get_class<app::TaskExceptionHolder__Class>(type_info, "System.Threading.Tasks", "TaskExceptionHolder");
        }
        inline app::TaskExceptionHolder* create() {
            return il2cpp::create_object<app::TaskExceptionHolder>(get_class());
        }
    } // namespace TaskExceptionHolder
} // namespace app::classes::types
