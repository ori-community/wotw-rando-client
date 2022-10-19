#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeStructs_RemoteClass {
        namespace {
            inline app::RuntimeStructs_RemoteClass__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_RemoteClass__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_RemoteClass__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_RemoteClass__Class>(type_info, "Mono", "RuntimeStructs", "RemoteClass");
        }
        inline app::RuntimeStructs_RemoteClass* create() {
            return il2cpp::create_object<app::RuntimeStructs_RemoteClass>(get_class());
        }
        inline app::RuntimeStructs_RemoteClass__Boxed* box(app::RuntimeStructs_RemoteClass value) {
            return il2cpp::box_value<app::RuntimeStructs_RemoteClass__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_RemoteClass
} // namespace app::classes::types
