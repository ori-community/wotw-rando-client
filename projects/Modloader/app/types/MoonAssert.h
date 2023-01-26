#pragma once
#include <Modloader/app/structs/MoonAssert.h>
#include <Modloader/app/structs/MoonAssert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAssert {
        inline app::MoonAssert__Class** type_info() {
            static app::MoonAssert__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAssert__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAssert__Class* get_class() {
            return il2cpp::get_class<app::MoonAssert__Class>(type_info(), "", "MoonAssert");
        }
        inline app::MoonAssert* create() {
            return il2cpp::create_object<app::MoonAssert>(get_class());
        }
    } // namespace MoonAssert
} // namespace app::classes::types
