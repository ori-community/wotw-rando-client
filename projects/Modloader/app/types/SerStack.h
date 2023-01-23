#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerStack__Class.h>
#include <Modloader/app/structs/SerStack.h>

namespace app::classes::types {
    namespace SerStack {
        inline app::SerStack__Class** type_info = (app::SerStack__Class**)(modloader::win::memory::resolve_rva(0x0477BB10));
        inline app::SerStack__Class* get_class() {
            return il2cpp::get_class<app::SerStack__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
        }
        inline app::SerStack* create() {
            return il2cpp::create_object<app::SerStack>(get_class());
        }
    } // namespace SerStack
} // namespace app::classes::types
