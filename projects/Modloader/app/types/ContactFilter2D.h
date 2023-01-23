#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContactFilter2D__Class.h>
#include <Modloader/app/structs/ContactFilter2D.h>
#include <Modloader/app/structs/ContactFilter2D__Boxed.h>

namespace app::classes::types {
    namespace ContactFilter2D {
        namespace {
            inline app::ContactFilter2D__Class* type_info_ref = nullptr;
        }
        inline app::ContactFilter2D__Class** type_info = &type_info_ref;
        inline app::ContactFilter2D__Class* get_class() {
            return il2cpp::get_class<app::ContactFilter2D__Class>(type_info, "UnityEngine", "ContactFilter2D");
        }
        inline app::ContactFilter2D* create() {
            return il2cpp::create_object<app::ContactFilter2D>(get_class());
        }
        inline app::ContactFilter2D__Boxed* box(app::ContactFilter2D value) {
            return il2cpp::box_value<app::ContactFilter2D__Boxed>(get_class(), value);
        }
    } // namespace ContactFilter2D
} // namespace app::classes::types
