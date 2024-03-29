#pragma once
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Component_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Component_1 {
        inline app::Component_1__Class** type_info() {
            static app::Component_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Component_1__Class**)(modloader::win::memory::resolve_rva(0x04776B98));
            }
            return cache;
        }
        inline app::Component_1__Class* get_class() {
            return il2cpp::get_class<app::Component_1__Class>(type_info(), "UnityEngine", "Component");
        }
        inline app::Component_1* create() {
            return il2cpp::create_object<app::Component_1>(get_class());
        }
        inline app::Component_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Component_1__Array>(get_class(), size);
        }
        inline app::Component_1__Array* create_array(const std::vector<app::Component_1*>& items) {
            return il2cpp::array_new<app::Component_1__Array>(get_class(), items);
        }
    } // namespace Component_1
} // namespace app::classes::types
