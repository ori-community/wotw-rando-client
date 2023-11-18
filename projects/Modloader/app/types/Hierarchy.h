#pragma once
#include <Modloader/app/structs/Hierarchy.h>
#include <Modloader/app/structs/Hierarchy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Hierarchy {
        inline app::Hierarchy__Class** type_info() {
            static app::Hierarchy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Hierarchy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Hierarchy__Class* get_class() {
            return il2cpp::get_class<app::Hierarchy__Class>(type_info(), "RootMotion", "Hierarchy");
        }
        inline app::Hierarchy* create() {
            return il2cpp::create_object<app::Hierarchy>(get_class());
        }
    } // namespace Hierarchy
} // namespace app::classes::types
