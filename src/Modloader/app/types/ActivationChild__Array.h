#pragma once
#include <Modloader/app/structs/ActivationChild__Array.h>
#include <Modloader/app/structs/ActivationChild__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivationChild__Array {
        inline app::ActivationChild__Array__Class** type_info() {
            static app::ActivationChild__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivationChild__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivationChild__Array__Class* get_class() {
            return il2cpp::get_class<app::ActivationChild__Array__Class>(type_info(), "", "ActivationChild[]");
        }
        inline app::ActivationChild__Array* create() {
            return il2cpp::create_object<app::ActivationChild__Array>(get_class());
        }
    } // namespace ActivationChild__Array
} // namespace app::classes::types
