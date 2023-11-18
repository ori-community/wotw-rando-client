#pragma once
#include <Modloader/app/structs/BooleanUberStatePairBase.h>
#include <Modloader/app/structs/BooleanUberStatePairBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStatePairBase {
        inline app::BooleanUberStatePairBase__Class** type_info() {
            static app::BooleanUberStatePairBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BooleanUberStatePairBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BooleanUberStatePairBase__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStatePairBase__Class>(type_info(), "", "BooleanUberStatePairBase");
        }
        inline app::BooleanUberStatePairBase* create() {
            return il2cpp::create_object<app::BooleanUberStatePairBase>(get_class());
        }
    } // namespace BooleanUberStatePairBase
} // namespace app::classes::types
