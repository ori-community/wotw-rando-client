#pragma once
#include <Modloader/app/structs/FloatProviderAnimatorDriver.h>
#include <Modloader/app/structs/FloatProviderAnimatorDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatProviderAnimatorDriver {
        inline app::FloatProviderAnimatorDriver__Class** type_info() {
            static app::FloatProviderAnimatorDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatProviderAnimatorDriver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatProviderAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderAnimatorDriver__Class>(type_info(), "", "FloatProviderAnimatorDriver");
        }
        inline app::FloatProviderAnimatorDriver* create() {
            return il2cpp::create_object<app::FloatProviderAnimatorDriver>(get_class());
        }
    } // namespace FloatProviderAnimatorDriver
} // namespace app::classes::types
