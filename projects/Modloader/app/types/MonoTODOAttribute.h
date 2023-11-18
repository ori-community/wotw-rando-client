#pragma once
#include <Modloader/app/structs/MonoTODOAttribute.h>
#include <Modloader/app/structs/MonoTODOAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTODOAttribute {
        inline app::MonoTODOAttribute__Class** type_info() {
            static app::MonoTODOAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoTODOAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoTODOAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute__Class>(type_info(), "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute* create() {
            return il2cpp::create_object<app::MonoTODOAttribute>(get_class());
        }
    } // namespace MonoTODOAttribute
} // namespace app::classes::types
