#pragma once
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/FloatValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatValueProvider {
        inline app::FloatValueProvider__Class** type_info() {
            static app::FloatValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatValueProvider__Class* get_class() {
            return il2cpp::get_class<app::FloatValueProvider__Class>(type_info(), "", "FloatValueProvider");
        }
        inline app::FloatValueProvider* create() {
            return il2cpp::create_object<app::FloatValueProvider>(get_class());
        }
    } // namespace FloatValueProvider
} // namespace app::classes::types
