#pragma once
#include <Modloader/app/structs/ComVisibleAttribute.h>
#include <Modloader/app/structs/ComVisibleAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComVisibleAttribute {
        inline app::ComVisibleAttribute__Class** type_info() {
            static app::ComVisibleAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComVisibleAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComVisibleAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComVisibleAttribute__Class>(type_info(), "System.Runtime.InteropServices", "ComVisibleAttribute");
        }
        inline app::ComVisibleAttribute* create() {
            return il2cpp::create_object<app::ComVisibleAttribute>(get_class());
        }
    } // namespace ComVisibleAttribute
} // namespace app::classes::types
