#pragma once
#include <Modloader/app/structs/ExternalForceEntry__Array.h>
#include <Modloader/app/structs/ExternalForceEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalForceEntry__Array {
        inline app::ExternalForceEntry__Array__Class** type_info() {
            static app::ExternalForceEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExternalForceEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExternalForceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ExternalForceEntry__Array__Class>(type_info(), "", "ExternalForceEntry[]");
        }
        inline app::ExternalForceEntry__Array* create() {
            return il2cpp::create_object<app::ExternalForceEntry__Array>(get_class());
        }
    } // namespace ExternalForceEntry__Array
} // namespace app::classes::types
