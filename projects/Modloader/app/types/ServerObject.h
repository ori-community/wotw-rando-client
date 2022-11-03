#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerObject {
        inline app::ServerObject__Class** type_info = (app::ServerObject__Class**)(modloader::win::memory::resolve_rva(0x0475C208));
        inline app::ServerObject__Class* get_class() {
            return il2cpp::get_class<app::ServerObject__Class>(type_info, "", "ServerObject");
        }
        inline app::ServerObject* create() {
            return il2cpp::create_object<app::ServerObject>(get_class());
        }
        inline app::ServerObject__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerObject__Array>(get_class(), size);
        }
        inline app::ServerObject__Array* create_array(const std::vector<app::ServerObject*>& items) {
            return il2cpp::array_new<app::ServerObject__Array>(get_class(), items);
        }
    } // namespace ServerObject
} // namespace app::classes::types
