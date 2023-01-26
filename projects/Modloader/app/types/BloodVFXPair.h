#pragma once
#include <Modloader/app/structs/BloodVFXPair.h>
#include <Modloader/app/structs/BloodVFXPair__Array.h>
#include <Modloader/app/structs/BloodVFXPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloodVFXPair {
        inline app::BloodVFXPair__Class** type_info() {
            static app::BloodVFXPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BloodVFXPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BloodVFXPair__Class* get_class() {
            return il2cpp::get_class<app::BloodVFXPair__Class>(type_info(), "", "BloodVFXPair");
        }
        inline app::BloodVFXPair* create() {
            return il2cpp::create_object<app::BloodVFXPair>(get_class());
        }
        inline app::BloodVFXPair__Array* create_array(int size) {
            return il2cpp::array_new<app::BloodVFXPair__Array>(get_class(), size);
        }
        inline app::BloodVFXPair__Array* create_array(const std::vector<app::BloodVFXPair*>& items) {
            return il2cpp::array_new<app::BloodVFXPair__Array>(get_class(), items);
        }
    } // namespace BloodVFXPair
} // namespace app::classes::types
