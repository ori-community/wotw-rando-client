#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerObjectComponent {
        inline app::ServerObjectComponent__Class** type_info = (app::ServerObjectComponent__Class**)(modloader::win::memory::resolve_rva(0x04794918));
        inline app::ServerObjectComponent__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectComponent__Class>(type_info, "", "ServerObjectComponent");
        }
        inline app::ServerObjectComponent* create() {
            return il2cpp::create_object<app::ServerObjectComponent>(get_class());
        }
        inline app::ServerObjectComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerObjectComponent__Array>(get_class(), size);
        }
        inline app::ServerObjectComponent__Array* create_array(const std::vector<app::ServerObjectComponent*>& items) {
            return il2cpp::array_new<app::ServerObjectComponent__Array>(get_class(), items);
        }
    } // namespace ServerObjectComponent
} // namespace app::classes::types
