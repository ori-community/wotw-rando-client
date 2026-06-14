#pragma once
#include <Modloader/app/structs/DeathWisp__Array.h>
#include <Modloader/app/structs/DeathWisp__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathWisp__Array {
        inline app::DeathWisp__Array__Class** type_info() {
            static app::DeathWisp__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeathWisp__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeathWisp__Array__Class* get_class() {
            return il2cpp::get_class<app::DeathWisp__Array__Class>(type_info(), "", "DeathWisp[]");
        }
        inline app::DeathWisp__Array* create() {
            return il2cpp::create_object<app::DeathWisp__Array>(get_class());
        }
    } // namespace DeathWisp__Array
} // namespace app::classes::types
