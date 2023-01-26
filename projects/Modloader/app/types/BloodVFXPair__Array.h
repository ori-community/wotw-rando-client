#pragma once
#include <Modloader/app/structs/BloodVFXPair__Array.h>
#include <Modloader/app/structs/BloodVFXPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloodVFXPair__Array {
        inline app::BloodVFXPair__Array__Class** type_info() {
            static app::BloodVFXPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BloodVFXPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BloodVFXPair__Array__Class* get_class() {
            return il2cpp::get_class<app::BloodVFXPair__Array__Class>(type_info(), "", "BloodVFXPair[]");
        }
        inline app::BloodVFXPair__Array* create() {
            return il2cpp::create_object<app::BloodVFXPair__Array>(get_class());
        }
    } // namespace BloodVFXPair__Array
} // namespace app::classes::types
