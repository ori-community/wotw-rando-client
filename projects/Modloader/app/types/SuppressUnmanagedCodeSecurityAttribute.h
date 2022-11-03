#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SuppressUnmanagedCodeSecurityAttribute {
        namespace {
            inline app::SuppressUnmanagedCodeSecurityAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SuppressUnmanagedCodeSecurityAttribute__Class** type_info = &type_info_ref;
        inline app::SuppressUnmanagedCodeSecurityAttribute__Class* get_class() {
            return il2cpp::get_class<app::SuppressUnmanagedCodeSecurityAttribute__Class>(type_info, "System.Security", "SuppressUnmanagedCodeSecurityAttribute");
        }
        inline app::SuppressUnmanagedCodeSecurityAttribute* create() {
            return il2cpp::create_object<app::SuppressUnmanagedCodeSecurityAttribute>(get_class());
        }
    } // namespace SuppressUnmanagedCodeSecurityAttribute
} // namespace app::classes::types
