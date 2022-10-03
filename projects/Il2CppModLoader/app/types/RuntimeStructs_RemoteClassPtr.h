#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_RemoteClassPtr {
        namespace {
            app::RuntimeStructs_RemoteClassPtr__Class* type_info_ref = nullptr;
        }
        app::RuntimeStructs_RemoteClassPtr__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_RemoteClassPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_RemoteClassPtr__Class>(type_info, "Mono", "RuntimeStructs+RemoteClass*");
        }
        inline app::RuntimeStructs_RemoteClassPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_RemoteClassPtr>(get_class());
        }
    } // namespace RuntimeStructs_RemoteClassPtr
} // namespace app::classes::types
