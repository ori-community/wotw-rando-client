#pragma once
#include <Modloader/app/structs/AesManaged.h>
#include <Modloader/app/structs/AesManaged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AesManaged {
        inline app::AesManaged__Class** type_info() {
            static app::AesManaged__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AesManaged__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AesManaged__Class* get_class() {
            return il2cpp::get_class<app::AesManaged__Class>(type_info(), "System.Security.Cryptography", "AesManaged");
        }
        inline app::AesManaged* create() {
            return il2cpp::create_object<app::AesManaged>(get_class());
        }
    } // namespace AesManaged
} // namespace app::classes::types
