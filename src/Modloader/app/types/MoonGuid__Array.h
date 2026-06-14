#pragma once
#include <Modloader/app/structs/MoonGuid__Array.h>
#include <Modloader/app/structs/MoonGuid__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonGuid__Array {
        inline app::MoonGuid__Array__Class** type_info() {
            static app::MoonGuid__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonGuid__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonGuid__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonGuid__Array__Class>(type_info(), "", "MoonGuid[]");
        }
        inline app::MoonGuid__Array* create() {
            return il2cpp::create_object<app::MoonGuid__Array>(get_class());
        }
    } // namespace MoonGuid__Array
} // namespace app::classes::types
