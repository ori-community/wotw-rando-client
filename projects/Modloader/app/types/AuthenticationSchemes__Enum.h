#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationSchemes__Enum {
        inline app::AuthenticationSchemes__Enum__Class** type_info = (app::AuthenticationSchemes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04719058));
        inline app::AuthenticationSchemes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationSchemes__Enum__Class>(type_info, "System.Net", "AuthenticationSchemes");
        }
        inline app::AuthenticationSchemes__Enum* create() {
            return il2cpp::create_object<app::AuthenticationSchemes__Enum>(get_class());
        }
    } // namespace AuthenticationSchemes__Enum
} // namespace app::classes::types
