#pragma once
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Component_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Component_1__Array {
        inline app::Component_1__Array__Class** type_info() {
            static app::Component_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Component_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04722620));
            }
            return cache;
        }
        inline app::Component_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Component_1__Array__Class>(type_info(), "UnityEngine", "Component[]");
        }
        inline app::Component_1__Array* create() {
            return il2cpp::create_object<app::Component_1__Array>(get_class());
        }
    } // namespace Component_1__Array
} // namespace app::classes::types
