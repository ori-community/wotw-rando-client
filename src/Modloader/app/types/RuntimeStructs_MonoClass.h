#pragma once
#include <Modloader/app/structs/RuntimeStructs_MonoClass.h>
#include <Modloader/app/structs/RuntimeStructs_MonoClass__Boxed.h>
#include <Modloader/app/structs/RuntimeStructs_MonoClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoClass {
        inline app::RuntimeStructs_MonoClass__Class** type_info() {
            static app::RuntimeStructs_MonoClass__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_MonoClass__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_MonoClass__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_MonoClass__Class>(type_info(), "Mono", "RuntimeStructs", "MonoClass");
        }
        inline app::RuntimeStructs_MonoClass* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoClass>(get_class());
        }
        inline app::RuntimeStructs_MonoClass__Boxed* box(app::RuntimeStructs_MonoClass value) {
            return il2cpp::box_value<app::RuntimeStructs_MonoClass__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_MonoClass
} // namespace app::classes::types
