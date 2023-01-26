#pragma once
#include <Modloader/app/structs/ExplodingRigidbody.h>
#include <Modloader/app/structs/ExplodingRigidbody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExplodingRigidbody {
        inline app::ExplodingRigidbody__Class** type_info() {
            static app::ExplodingRigidbody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExplodingRigidbody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExplodingRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ExplodingRigidbody__Class>(type_info(), "", "ExplodingRigidbody");
        }
        inline app::ExplodingRigidbody* create() {
            return il2cpp::create_object<app::ExplodingRigidbody>(get_class());
        }
    } // namespace ExplodingRigidbody
} // namespace app::classes::types
