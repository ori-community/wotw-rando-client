#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PKCS5__Class.h>
#include <Modloader/app/structs/PKCS5.h>

namespace app::classes::types {
    namespace PKCS5 {
        namespace {
            inline app::PKCS5__Class* type_info_ref = nullptr;
        }
        inline app::PKCS5__Class** type_info = &type_info_ref;
        inline app::PKCS5__Class* get_class() {
            return il2cpp::get_class<app::PKCS5__Class>(type_info, "Mono.Security.X509", "PKCS5");
        }
        inline app::PKCS5* create() {
            return il2cpp::create_object<app::PKCS5>(get_class());
        }
    } // namespace PKCS5
} // namespace app::classes::types
