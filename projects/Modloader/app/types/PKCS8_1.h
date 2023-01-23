#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PKCS8_1__Class.h>
#include <Modloader/app/structs/PKCS8_1.h>

namespace app::classes::types {
    namespace PKCS8_1 {
        namespace {
            inline app::PKCS8_1__Class* type_info_ref = nullptr;
        }
        inline app::PKCS8_1__Class** type_info = &type_info_ref;
        inline app::PKCS8_1__Class* get_class() {
            return il2cpp::get_class<app::PKCS8_1__Class>(type_info, "Mono.Security.Cryptography", "PKCS8");
        }
        inline app::PKCS8_1* create() {
            return il2cpp::create_object<app::PKCS8_1>(get_class());
        }
    } // namespace PKCS8_1
} // namespace app::classes::types
