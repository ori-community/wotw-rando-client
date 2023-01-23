#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindowsAccountType__Enum__Class.h>
#include <Modloader/app/structs/WindowsAccountType__Enum.h>

namespace app::classes::types {
    namespace WindowsAccountType__Enum {
        inline app::WindowsAccountType__Enum__Class** type_info = (app::WindowsAccountType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715890));
        inline app::WindowsAccountType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WindowsAccountType__Enum__Class>(type_info, "System.Security.Principal", "WindowsAccountType");
        }
        inline app::WindowsAccountType__Enum* create() {
            return il2cpp::create_object<app::WindowsAccountType__Enum>(get_class());
        }
    } // namespace WindowsAccountType__Enum
} // namespace app::classes::types
