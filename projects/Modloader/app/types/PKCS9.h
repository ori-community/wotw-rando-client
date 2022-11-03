#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS9 {
        namespace {
            inline app::PKCS9__Class* type_info_ref = nullptr;
        }
        inline app::PKCS9__Class** type_info = &type_info_ref;
        inline app::PKCS9__Class* get_class() {
            return il2cpp::get_class<app::PKCS9__Class>(type_info, "Mono.Security.X509", "PKCS9");
        }
        inline app::PKCS9* create() {
            return il2cpp::create_object<app::PKCS9>(get_class());
        }
    } // namespace PKCS9
} // namespace app::classes::types
