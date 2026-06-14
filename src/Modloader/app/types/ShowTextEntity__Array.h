#pragma once
#include <Modloader/app/structs/ShowTextEntity__Array.h>
#include <Modloader/app/structs/ShowTextEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowTextEntity__Array {
        inline app::ShowTextEntity__Array__Class** type_info() {
            static app::ShowTextEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowTextEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowTextEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::ShowTextEntity__Array__Class>(type_info(), "Moon.Timeline", "ShowTextEntity[]");
        }
        inline app::ShowTextEntity__Array* create() {
            return il2cpp::create_object<app::ShowTextEntity__Array>(get_class());
        }
    } // namespace ShowTextEntity__Array
} // namespace app::classes::types
