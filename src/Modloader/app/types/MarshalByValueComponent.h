#pragma once
#include <Modloader/app/structs/MarshalByValueComponent.h>
#include <Modloader/app/structs/MarshalByValueComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MarshalByValueComponent {
        inline app::MarshalByValueComponent__Class** type_info() {
            static app::MarshalByValueComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MarshalByValueComponent__Class**)(modloader::win::memory::resolve_rva(0x04718188));
            }
            return cache;
        }
        inline app::MarshalByValueComponent__Class* get_class() {
            return il2cpp::get_class<app::MarshalByValueComponent__Class>(type_info(), "System.ComponentModel", "MarshalByValueComponent");
        }
        inline app::MarshalByValueComponent* create() {
            return il2cpp::create_object<app::MarshalByValueComponent>(get_class());
        }
    } // namespace MarshalByValueComponent
} // namespace app::classes::types
