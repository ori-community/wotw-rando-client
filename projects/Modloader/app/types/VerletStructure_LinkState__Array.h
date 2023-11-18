#pragma once
#include <Modloader/app/structs/VerletStructure_LinkState__Array.h>
#include <Modloader/app/structs/VerletStructure_LinkState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructure_LinkState__Array {
        inline app::VerletStructure_LinkState__Array__Class** type_info() {
            static app::VerletStructure_LinkState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructure_LinkState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructure_LinkState__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletStructure_LinkState__Array__Class>(type_info(), "", "VerletStructure+LinkState[]");
        }
        inline app::VerletStructure_LinkState__Array* create() {
            return il2cpp::create_object<app::VerletStructure_LinkState__Array>(get_class());
        }
    } // namespace VerletStructure_LinkState__Array
} // namespace app::classes::types
