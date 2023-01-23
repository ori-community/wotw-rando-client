#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SecureString__Class.h>
#include <Modloader/app/structs/SecureString.h>

namespace app::classes::types {
    namespace SecureString {
        inline app::SecureString__Class** type_info = (app::SecureString__Class**)(modloader::win::memory::resolve_rva(0x047726D0));
        inline app::SecureString__Class* get_class() {
            return il2cpp::get_class<app::SecureString__Class>(type_info, "System.Security", "SecureString");
        }
        inline app::SecureString* create() {
            return il2cpp::create_object<app::SecureString>(get_class());
        }
    } // namespace SecureString
} // namespace app::classes::types
