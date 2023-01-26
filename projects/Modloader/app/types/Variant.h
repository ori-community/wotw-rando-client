#pragma once
#include <Modloader/app/structs/Variant.h>
#include <Modloader/app/structs/Variant__Boxed.h>
#include <Modloader/app/structs/Variant__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Variant {
        inline app::Variant__Class** type_info() {
            static app::Variant__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Variant__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Variant__Class* get_class() {
            return il2cpp::get_class<app::Variant__Class>(type_info(), "System", "Variant");
        }
        inline app::Variant* create() {
            return il2cpp::create_object<app::Variant>(get_class());
        }
        inline app::Variant__Boxed* box(app::Variant value) {
            return il2cpp::box_value<app::Variant__Boxed>(get_class(), value);
        }
    } // namespace Variant
} // namespace app::classes::types
