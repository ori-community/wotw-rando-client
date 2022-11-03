#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AesManaged {
        namespace {
            inline app::AesManaged__Class* type_info_ref = nullptr;
        }
        inline app::AesManaged__Class** type_info = &type_info_ref;
        inline app::AesManaged__Class* get_class() {
            return il2cpp::get_class<app::AesManaged__Class>(type_info, "System.Security.Cryptography", "AesManaged");
        }
        inline app::AesManaged* create() {
            return il2cpp::create_object<app::AesManaged>(get_class());
        }
    } // namespace AesManaged
} // namespace app::classes::types
