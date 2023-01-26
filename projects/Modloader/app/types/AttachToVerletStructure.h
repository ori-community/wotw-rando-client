#pragma once
#include <Modloader/app/structs/AttachToVerletStructure.h>
#include <Modloader/app/structs/AttachToVerletStructure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachToVerletStructure {
        inline app::AttachToVerletStructure__Class** type_info() {
            static app::AttachToVerletStructure__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachToVerletStructure__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachToVerletStructure__Class* get_class() {
            return il2cpp::get_class<app::AttachToVerletStructure__Class>(type_info(), "", "AttachToVerletStructure");
        }
        inline app::AttachToVerletStructure* create() {
            return il2cpp::create_object<app::AttachToVerletStructure>(get_class());
        }
    } // namespace AttachToVerletStructure
} // namespace app::classes::types
