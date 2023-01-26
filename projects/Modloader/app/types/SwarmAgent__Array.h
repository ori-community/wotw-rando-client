#pragma once
#include <Modloader/app/structs/SwarmAgent__Array.h>
#include <Modloader/app/structs/SwarmAgent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmAgent__Array {
        inline app::SwarmAgent__Array__Class** type_info() {
            static app::SwarmAgent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmAgent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::SwarmAgent__Array__Class>(type_info(), "", "SwarmAgent[]");
        }
        inline app::SwarmAgent__Array* create() {
            return il2cpp::create_object<app::SwarmAgent__Array>(get_class());
        }
    } // namespace SwarmAgent__Array
} // namespace app::classes::types
