#pragma once
#include <Modloader/app/structs/DispIdAttribute.h>
#include <Modloader/app/structs/DispIdAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DispIdAttribute {
        inline app::DispIdAttribute__Class** type_info() {
            static app::DispIdAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DispIdAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DispIdAttribute__Class* get_class() {
            return il2cpp::get_class<app::DispIdAttribute__Class>(type_info(), "System.Runtime.InteropServices", "DispIdAttribute");
        }
        inline app::DispIdAttribute* create() {
            return il2cpp::create_object<app::DispIdAttribute>(get_class());
        }
    } // namespace DispIdAttribute
} // namespace app::classes::types
