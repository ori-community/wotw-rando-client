#pragma once
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum.h>
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspendWhenOtherOutOfFrustrum {
        inline app::SuspendWhenOtherOutOfFrustrum__Class** type_info() {
            static app::SuspendWhenOtherOutOfFrustrum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SuspendWhenOtherOutOfFrustrum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SuspendWhenOtherOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SuspendWhenOtherOutOfFrustrum__Class>(type_info(), "", "SuspendWhenOtherOutOfFrustrum");
        }
        inline app::SuspendWhenOtherOutOfFrustrum* create() {
            return il2cpp::create_object<app::SuspendWhenOtherOutOfFrustrum>(get_class());
        }
    } // namespace SuspendWhenOtherOutOfFrustrum
} // namespace app::classes::types
