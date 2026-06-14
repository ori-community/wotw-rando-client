#pragma once
#include <Modloader/app/structs/DebuggableAttribute.h>
#include <Modloader/app/structs/DebuggableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggableAttribute {
        inline app::DebuggableAttribute__Class** type_info() {
            static app::DebuggableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggableAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggableAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggableAttribute__Class>(type_info(), "System.Diagnostics", "DebuggableAttribute");
        }
        inline app::DebuggableAttribute* create() {
            return il2cpp::create_object<app::DebuggableAttribute>(get_class());
        }
    } // namespace DebuggableAttribute
} // namespace app::classes::types
