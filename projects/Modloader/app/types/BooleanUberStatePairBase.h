#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanUberStatePairBase {
        namespace {
            inline app::BooleanUberStatePairBase__Class* type_info_ref = nullptr;
        }
        inline app::BooleanUberStatePairBase__Class** type_info = &type_info_ref;
        inline app::BooleanUberStatePairBase__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStatePairBase__Class>(type_info, "", "BooleanUberStatePairBase");
        }
        inline app::BooleanUberStatePairBase* create() {
            return il2cpp::create_object<app::BooleanUberStatePairBase>(get_class());
        }
    } // namespace BooleanUberStatePairBase
} // namespace app::classes::types
