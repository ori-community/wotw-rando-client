#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComponent__Array {
        inline app::IComponent__Array__Class** type_info = (app::IComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x04769228));
        inline app::IComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::IComponent__Array__Class>(type_info, "System.ComponentModel", "IComponent[]");
        }
        inline app::IComponent__Array* create() {
            return il2cpp::create_object<app::IComponent__Array>(get_class());
        }
    } // namespace IComponent__Array
} // namespace app::classes::types
