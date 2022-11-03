#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MarshalByValueComponent {
        inline app::MarshalByValueComponent__Class** type_info = (app::MarshalByValueComponent__Class**)(modloader::win::memory::resolve_rva(0x04718188));
        inline app::MarshalByValueComponent__Class* get_class() {
            return il2cpp::get_class<app::MarshalByValueComponent__Class>(type_info, "System.ComponentModel", "MarshalByValueComponent");
        }
        inline app::MarshalByValueComponent* create() {
            return il2cpp::create_object<app::MarshalByValueComponent>(get_class());
        }
    } // namespace MarshalByValueComponent
} // namespace app::classes::types
