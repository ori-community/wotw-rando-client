#pragma once
#include <Modloader/app/structs/CrabPlaceholderGroup.h>
#include <Modloader/app/structs/CrabPlaceholderGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabPlaceholderGroup {
        inline app::CrabPlaceholderGroup__Class** type_info() {
            static app::CrabPlaceholderGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabPlaceholderGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabPlaceholderGroup__Class* get_class() {
            return il2cpp::get_class<app::CrabPlaceholderGroup__Class>(type_info(), "", "CrabPlaceholderGroup");
        }
        inline app::CrabPlaceholderGroup* create() {
            return il2cpp::create_object<app::CrabPlaceholderGroup>(get_class());
        }
    } // namespace CrabPlaceholderGroup
} // namespace app::classes::types
