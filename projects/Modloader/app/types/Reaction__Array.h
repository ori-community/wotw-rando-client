#pragma once
#include <Modloader/app/structs/Reaction__Array.h>
#include <Modloader/app/structs/Reaction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Reaction__Array {
        inline app::Reaction__Array__Class** type_info() {
            static app::Reaction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Reaction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Reaction__Array__Class* get_class() {
            return il2cpp::get_class<app::Reaction__Array__Class>(type_info(), "Moon.Timeline", "Reaction[]");
        }
        inline app::Reaction__Array* create() {
            return il2cpp::create_object<app::Reaction__Array>(get_class());
        }
    } // namespace Reaction__Array
} // namespace app::classes::types
