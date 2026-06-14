#pragma once
#include <Modloader/app/structs/SuppressUnmanagedCodeSecurityAttribute.h>
#include <Modloader/app/structs/SuppressUnmanagedCodeSecurityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuppressUnmanagedCodeSecurityAttribute {
        inline app::SuppressUnmanagedCodeSecurityAttribute__Class** type_info() {
            static app::SuppressUnmanagedCodeSecurityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SuppressUnmanagedCodeSecurityAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SuppressUnmanagedCodeSecurityAttribute__Class* get_class() {
            return il2cpp::get_class<app::SuppressUnmanagedCodeSecurityAttribute__Class>(type_info(), "System.Security", "SuppressUnmanagedCodeSecurityAttribute");
        }
        inline app::SuppressUnmanagedCodeSecurityAttribute* create() {
            return il2cpp::create_object<app::SuppressUnmanagedCodeSecurityAttribute>(get_class());
        }
    } // namespace SuppressUnmanagedCodeSecurityAttribute
} // namespace app::classes::types
