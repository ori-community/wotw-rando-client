#pragma once
#include <Modloader/app/structs/BreakableObject.h>
#include <Modloader/app/structs/BreakableObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakableObject {
        inline app::BreakableObject__Class** type_info() {
            static app::BreakableObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakableObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakableObject__Class* get_class() {
            return il2cpp::get_class<app::BreakableObject__Class>(type_info(), "", "BreakableObject");
        }
        inline app::BreakableObject* create() {
            return il2cpp::create_object<app::BreakableObject>(get_class());
        }
    } // namespace BreakableObject
} // namespace app::classes::types
