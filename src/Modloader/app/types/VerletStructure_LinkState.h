#pragma once
#include <Modloader/app/structs/VerletStructure_LinkState.h>
#include <Modloader/app/structs/VerletStructure_LinkState__Array.h>
#include <Modloader/app/structs/VerletStructure_LinkState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_LinkState {
        inline app::VerletStructure_LinkState__Class** type_info() {
            static app::VerletStructure_LinkState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_LinkState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_LinkState__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletStructure_LinkState__Class>(type_info(), "", "VerletStructure", "LinkState");
        }
        inline app::VerletStructure_LinkState* create() {
            return il2cpp::create_object<app::VerletStructure_LinkState>(get_class());
        }
        inline app::VerletStructure_LinkState__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletStructure_LinkState__Array>(get_class(), size);
        }
        inline app::VerletStructure_LinkState__Array* create_array(const std::vector<app::VerletStructure_LinkState*>& items) {
            return il2cpp::array_new<app::VerletStructure_LinkState__Array>(get_class(), items);
        }
    } // namespace VerletStructure_LinkState
} // namespace app::classes::types
