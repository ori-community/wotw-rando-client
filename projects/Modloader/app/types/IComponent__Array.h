#pragma once
#include <Modloader/app/structs/IComponent__Array.h>
#include <Modloader/app/structs/IComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComponent__Array {
        inline app::IComponent__Array__Class** type_info() {
            static app::IComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x04769228));
            }
            return cache;
        }
        inline app::IComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::IComponent__Array__Class>(type_info(), "System.ComponentModel", "IComponent[]");
        }
        inline app::IComponent__Array* create() {
            return il2cpp::create_object<app::IComponent__Array>(get_class());
        }
    } // namespace IComponent__Array
} // namespace app::classes::types
