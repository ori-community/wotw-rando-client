#pragma once
#include <Modloader/app/structs/VerticalSpacer_Item__Array.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalSpacer_Item__Array {
        inline app::VerticalSpacer_Item__Array__Class** type_info() {
            static app::VerticalSpacer_Item__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerticalSpacer_Item__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerticalSpacer_Item__Array__Class* get_class() {
            return il2cpp::get_class<app::VerticalSpacer_Item__Array__Class>(type_info(), "", "VerticalSpacer+Item[]");
        }
        inline app::VerticalSpacer_Item__Array* create() {
            return il2cpp::create_object<app::VerticalSpacer_Item__Array>(get_class());
        }
    } // namespace VerticalSpacer_Item__Array
} // namespace app::classes::types
