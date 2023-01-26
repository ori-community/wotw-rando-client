#pragma once
#include <Modloader/app/structs/SecureString.h>
#include <Modloader/app/structs/SecureString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecureString {
        inline app::SecureString__Class** type_info() {
            static app::SecureString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecureString__Class**)(modloader::win::memory::resolve_rva(0x047726D0));
            }
            return cache;
        }
        inline app::SecureString__Class* get_class() {
            return il2cpp::get_class<app::SecureString__Class>(type_info(), "System.Security", "SecureString");
        }
        inline app::SecureString* create() {
            return il2cpp::create_object<app::SecureString>(get_class());
        }
    } // namespace SecureString
} // namespace app::classes::types
