#pragma once
#include <Modloader/app/structs/MonoTODOAttribute_2.h>
#include <Modloader/app/structs/MonoTODOAttribute_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTODOAttribute_2 {
        inline app::MonoTODOAttribute_2__Class** type_info() {
            static app::MonoTODOAttribute_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoTODOAttribute_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoTODOAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute_2__Class>(type_info(), "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute_2* create() {
            return il2cpp::create_object<app::MonoTODOAttribute_2>(get_class());
        }
    } // namespace MonoTODOAttribute_2
} // namespace app::classes::types
