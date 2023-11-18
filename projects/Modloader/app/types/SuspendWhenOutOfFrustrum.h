#pragma once
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspendWhenOutOfFrustrum {
        inline app::SuspendWhenOutOfFrustrum__Class** type_info() {
            static app::SuspendWhenOutOfFrustrum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SuspendWhenOutOfFrustrum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SuspendWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOutOfFrustrum__Class>(type_info(), "", "SuspendWhenOutOfFrustrum");
        }
        inline app::SuspendWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::SuspendWhenOutOfFrustrum>(get_class());
        }
    } // namespace SuspendWhenOutOfFrustrum
} // namespace app::classes::types
