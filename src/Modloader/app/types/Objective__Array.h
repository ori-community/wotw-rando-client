#pragma once
#include <Modloader/app/structs/Objective__Array.h>
#include <Modloader/app/structs/Objective__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Objective__Array {
        inline app::Objective__Array__Class** type_info() {
            static app::Objective__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Objective__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Objective__Array__Class* get_class() {
            return il2cpp::get_class<app::Objective__Array__Class>(type_info(), "", "Objective[]");
        }
        inline app::Objective__Array* create() {
            return il2cpp::create_object<app::Objective__Array>(get_class());
        }
    } // namespace Objective__Array
} // namespace app::classes::types
