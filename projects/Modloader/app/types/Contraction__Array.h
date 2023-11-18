#pragma once
#include <Modloader/app/structs/Contraction__Array.h>
#include <Modloader/app/structs/Contraction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Contraction__Array {
        inline app::Contraction__Array__Class** type_info() {
            static app::Contraction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Contraction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Contraction__Array__Class* get_class() {
            return il2cpp::get_class<app::Contraction__Array__Class>(type_info(), "Mono.Globalization.Unicode", "Contraction[]");
        }
        inline app::Contraction__Array* create() {
            return il2cpp::create_object<app::Contraction__Array>(get_class());
        }
    } // namespace Contraction__Array
} // namespace app::classes::types
