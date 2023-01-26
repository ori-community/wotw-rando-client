#pragma once
#include <Modloader/app/structs/BooleanUberStatePair.h>
#include <Modloader/app/structs/BooleanUberStatePair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStatePair {
        inline app::BooleanUberStatePair__Class** type_info() {
            static app::BooleanUberStatePair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BooleanUberStatePair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BooleanUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStatePair__Class>(type_info(), "", "BooleanUberStatePair");
        }
        inline app::BooleanUberStatePair* create() {
            return il2cpp::create_object<app::BooleanUberStatePair>(get_class());
        }
    } // namespace BooleanUberStatePair
} // namespace app::classes::types
