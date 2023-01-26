#pragma once
#include <Modloader/app/structs/PlaceholderGroup.h>
#include <Modloader/app/structs/PlaceholderGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaceholderGroup {
        inline app::PlaceholderGroup__Class** type_info() {
            static app::PlaceholderGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaceholderGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaceholderGroup__Class* get_class() {
            return il2cpp::get_class<app::PlaceholderGroup__Class>(type_info(), "", "PlaceholderGroup");
        }
        inline app::PlaceholderGroup* create() {
            return il2cpp::create_object<app::PlaceholderGroup>(get_class());
        }
    } // namespace PlaceholderGroup
} // namespace app::classes::types
