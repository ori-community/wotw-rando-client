#pragma once
#include <Modloader/app/structs/RuntimeStructs_RemoteClass.h>
#include <Modloader/app/structs/RuntimeStructs_RemoteClass__Boxed.h>
#include <Modloader/app/structs/RuntimeStructs_RemoteClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_RemoteClass {
        inline app::RuntimeStructs_RemoteClass__Class** type_info() {
            static app::RuntimeStructs_RemoteClass__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_RemoteClass__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_RemoteClass__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_RemoteClass__Class>(type_info(), "Mono", "RuntimeStructs", "RemoteClass");
        }
        inline app::RuntimeStructs_RemoteClass* create() {
            return il2cpp::create_object<app::RuntimeStructs_RemoteClass>(get_class());
        }
        inline app::RuntimeStructs_RemoteClass__Boxed* box(app::RuntimeStructs_RemoteClass value) {
            return il2cpp::box_value<app::RuntimeStructs_RemoteClass__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_RemoteClass
} // namespace app::classes::types
