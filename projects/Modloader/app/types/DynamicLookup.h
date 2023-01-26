#pragma once
#include <Modloader/app/structs/DynamicLookup.h>
#include <Modloader/app/structs/DynamicLookup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicLookup {
        inline app::DynamicLookup__Class** type_info() {
            static app::DynamicLookup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicLookup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicLookup__Class* get_class() {
            return il2cpp::get_class<app::DynamicLookup__Class>(type_info(), "Colorful", "DynamicLookup");
        }
        inline app::DynamicLookup* create() {
            return il2cpp::create_object<app::DynamicLookup>(get_class());
        }
    } // namespace DynamicLookup
} // namespace app::classes::types
