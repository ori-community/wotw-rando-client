#pragma once
#include <Modloader/app/structs/CryptoStream_ReadAsyncInternal_d_34.h>
#include <Modloader/app/structs/CryptoStream_ReadAsyncInternal_d_34__Boxed.h>
#include <Modloader/app/structs/CryptoStream_ReadAsyncInternal_d_34__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CryptoStream_ReadAsyncInternal_d_34 {
        inline app::CryptoStream_ReadAsyncInternal_d_34__Class** type_info() {
            static app::CryptoStream_ReadAsyncInternal_d_34__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CryptoStream_ReadAsyncInternal_d_34__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CryptoStream_ReadAsyncInternal_d_34__Class* get_class() {
            return il2cpp::get_nested_class<app::CryptoStream_ReadAsyncInternal_d_34__Class>(type_info(), "System.Security.Cryptography", "CryptoStream", "<ReadAsyncInternal>d__34");
        }
        inline app::CryptoStream_ReadAsyncInternal_d_34* create() {
            return il2cpp::create_object<app::CryptoStream_ReadAsyncInternal_d_34>(get_class());
        }
        inline app::CryptoStream_ReadAsyncInternal_d_34__Boxed* box(app::CryptoStream_ReadAsyncInternal_d_34 value) {
            return il2cpp::box_value<app::CryptoStream_ReadAsyncInternal_d_34__Boxed>(get_class(), value);
        }
    } // namespace CryptoStream_ReadAsyncInternal_d_34
} // namespace app::classes::types
