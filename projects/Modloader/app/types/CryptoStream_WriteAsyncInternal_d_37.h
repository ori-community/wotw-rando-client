#pragma once
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37.h>
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37__Boxed.h>
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CryptoStream_WriteAsyncInternal_d_37 {
        inline app::CryptoStream_WriteAsyncInternal_d_37__Class** type_info() {
            static app::CryptoStream_WriteAsyncInternal_d_37__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CryptoStream_WriteAsyncInternal_d_37__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CryptoStream_WriteAsyncInternal_d_37__Class* get_class() {
            return il2cpp::get_nested_class<app::CryptoStream_WriteAsyncInternal_d_37__Class>(type_info(), "System.Security.Cryptography", "CryptoStream", "<WriteAsyncInternal>d__37");
        }
        inline app::CryptoStream_WriteAsyncInternal_d_37* create() {
            return il2cpp::create_object<app::CryptoStream_WriteAsyncInternal_d_37>(get_class());
        }
        inline app::CryptoStream_WriteAsyncInternal_d_37__Boxed* box(app::CryptoStream_WriteAsyncInternal_d_37 value) {
            return il2cpp::box_value<app::CryptoStream_WriteAsyncInternal_d_37__Boxed>(get_class(), value);
        }
    } // namespace CryptoStream_WriteAsyncInternal_d_37
} // namespace app::classes::types
