#pragma once
#include <Modloader/app/structs/DynamicTextProvider.h>
#include <Modloader/app/structs/DynamicTextProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicTextProvider {
        inline app::DynamicTextProvider__Class** type_info() {
            static app::DynamicTextProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicTextProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicTextProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicTextProvider__Class>(type_info(), "", "DynamicTextProvider");
        }
        inline app::DynamicTextProvider* create() {
            return il2cpp::create_object<app::DynamicTextProvider>(get_class());
        }
    } // namespace DynamicTextProvider
} // namespace app::classes::types
