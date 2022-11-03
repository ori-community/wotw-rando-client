#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ElementInit {
        inline app::ElementInit__Class** type_info = (app::ElementInit__Class**)(modloader::win::memory::resolve_rva(0x04726D88));
        inline app::ElementInit__Class* get_class() {
            return il2cpp::get_class<app::ElementInit__Class>(type_info, "System.Linq.Expressions", "ElementInit");
        }
        inline app::ElementInit* create() {
            return il2cpp::create_object<app::ElementInit>(get_class());
        }
        inline app::ElementInit__Array* create_array(int size) {
            return il2cpp::array_new<app::ElementInit__Array>(get_class(), size);
        }
        inline app::ElementInit__Array* create_array(const std::vector<app::ElementInit*>& items) {
            return il2cpp::array_new<app::ElementInit__Array>(get_class(), items);
        }
    } // namespace ElementInit
} // namespace app::classes::types
