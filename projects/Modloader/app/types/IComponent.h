#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IComponent__Class.h>
#include <Modloader/app/structs/IComponent__Array.h>
#include <Modloader/app/structs/IComponent.h>

namespace app::classes::types {
    namespace IComponent {
        inline app::IComponent__Class** type_info = (app::IComponent__Class**)(modloader::win::memory::resolve_rva(0x04700C70));
        inline app::IComponent__Class* get_class() {
            return il2cpp::get_class<app::IComponent__Class>(type_info, "System.ComponentModel", "IComponent");
        }
        inline app::IComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::IComponent__Array>(get_class(), size);
        }
        inline app::IComponent__Array* create_array(const std::vector<app::IComponent*>& items) {
            return il2cpp::array_new<app::IComponent__Array>(get_class(), items);
        }
    } // namespace IComponent
} // namespace app::classes::types
