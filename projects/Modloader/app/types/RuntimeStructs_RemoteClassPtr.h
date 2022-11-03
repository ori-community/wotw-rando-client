#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeStructs_RemoteClassPtr {
        namespace {
            inline app::RuntimeStructs_RemoteClassPtr__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_RemoteClassPtr__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_RemoteClassPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_RemoteClassPtr__Class>(type_info, "Mono", "RuntimeStructs+RemoteClass*");
        }
        inline app::RuntimeStructs_RemoteClassPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_RemoteClassPtr>(get_class());
        }
    } // namespace RuntimeStructs_RemoteClassPtr
} // namespace app::classes::types
