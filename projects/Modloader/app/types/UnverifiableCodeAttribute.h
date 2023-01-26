#pragma once
#include <Modloader/app/structs/UnverifiableCodeAttribute.h>
#include <Modloader/app/structs/UnverifiableCodeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnverifiableCodeAttribute {
        inline app::UnverifiableCodeAttribute__Class** type_info() {
            static app::UnverifiableCodeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnverifiableCodeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnverifiableCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnverifiableCodeAttribute__Class>(type_info(), "System.Security", "UnverifiableCodeAttribute");
        }
        inline app::UnverifiableCodeAttribute* create() {
            return il2cpp::create_object<app::UnverifiableCodeAttribute>(get_class());
        }
    } // namespace UnverifiableCodeAttribute
} // namespace app::classes::types
