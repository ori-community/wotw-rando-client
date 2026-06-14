#pragma once
#include <Modloader/app/structs/SkipUberStateDuplicationHookAttribute.h>
#include <Modloader/app/structs/SkipUberStateDuplicationHookAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkipUberStateDuplicationHookAttribute {
        inline app::SkipUberStateDuplicationHookAttribute__Class** type_info() {
            static app::SkipUberStateDuplicationHookAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkipUberStateDuplicationHookAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkipUberStateDuplicationHookAttribute__Class* get_class() {
            return il2cpp::get_class<app::SkipUberStateDuplicationHookAttribute__Class>(type_info(), "Moon", "SkipUberStateDuplicationHookAttribute");
        }
        inline app::SkipUberStateDuplicationHookAttribute* create() {
            return il2cpp::create_object<app::SkipUberStateDuplicationHookAttribute>(get_class());
        }
    } // namespace SkipUberStateDuplicationHookAttribute
} // namespace app::classes::types
