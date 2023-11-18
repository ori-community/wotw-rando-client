#pragma once
#include <Modloader/app/structs/MonoTODOAttribute_1.h>
#include <Modloader/app/structs/MonoTODOAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTODOAttribute_1 {
        inline app::MonoTODOAttribute_1__Class** type_info() {
            static app::MonoTODOAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoTODOAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoTODOAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::MonoTODOAttribute_1__Class>(type_info(), "System", "MonoTODOAttribute");
        }
        inline app::MonoTODOAttribute_1* create() {
            return il2cpp::create_object<app::MonoTODOAttribute_1>(get_class());
        }
    } // namespace MonoTODOAttribute_1
} // namespace app::classes::types
