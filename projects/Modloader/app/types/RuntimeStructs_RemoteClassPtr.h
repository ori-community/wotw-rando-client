#pragma once
#include <Modloader/app/structs/RuntimeStructs_RemoteClassPtr.h>
#include <Modloader/app/structs/RuntimeStructs_RemoteClassPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_RemoteClassPtr {
        inline app::RuntimeStructs_RemoteClassPtr__Class** type_info() {
            static app::RuntimeStructs_RemoteClassPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_RemoteClassPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_RemoteClassPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_RemoteClassPtr__Class>(type_info(), "Mono", "RuntimeStructs+RemoteClass*");
        }
        inline app::RuntimeStructs_RemoteClassPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_RemoteClassPtr>(get_class());
        }
    } // namespace RuntimeStructs_RemoteClassPtr
} // namespace app::classes::types
