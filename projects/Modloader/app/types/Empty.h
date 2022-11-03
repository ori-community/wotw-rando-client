#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Empty {
        inline app::Empty__Class** type_info = (app::Empty__Class**)(modloader::win::memory::resolve_rva(0x04711268));
        inline app::Empty__Class* get_class() {
            return il2cpp::get_class<app::Empty__Class>(type_info, "System", "Empty");
        }
        inline app::Empty* create() {
            return il2cpp::create_object<app::Empty>(get_class());
        }
    } // namespace Empty
} // namespace app::classes::types
