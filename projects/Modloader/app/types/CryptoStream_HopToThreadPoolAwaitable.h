#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable__Class.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable__Boxed.h>

namespace app::classes::types {
    namespace CryptoStream_HopToThreadPoolAwaitable {
        namespace {
            inline app::CryptoStream_HopToThreadPoolAwaitable__Class* type_info_ref = nullptr;
        }
        inline app::CryptoStream_HopToThreadPoolAwaitable__Class** type_info = &type_info_ref;
        inline app::CryptoStream_HopToThreadPoolAwaitable__Class* get_class() {
            return il2cpp::get_nested_class<app::CryptoStream_HopToThreadPoolAwaitable__Class>(type_info, "System.Security.Cryptography", "CryptoStream", "HopToThreadPoolAwaitable");
        }
        inline app::CryptoStream_HopToThreadPoolAwaitable* create() {
            return il2cpp::create_object<app::CryptoStream_HopToThreadPoolAwaitable>(get_class());
        }
        inline app::CryptoStream_HopToThreadPoolAwaitable__Boxed* box(app::CryptoStream_HopToThreadPoolAwaitable value) {
            return il2cpp::box_value<app::CryptoStream_HopToThreadPoolAwaitable__Boxed>(get_class(), value);
        }
    } // namespace CryptoStream_HopToThreadPoolAwaitable
} // namespace app::classes::types
