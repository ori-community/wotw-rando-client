#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisposableBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DisposableBuffer__Class** type_info;
        inline app::DisposableBuffer__Class* get_class() {
            return il2cpp::get_class<app::DisposableBuffer__Class>(type_info, "XGamingRuntime.Interop", "DisposableBuffer");
        }
        inline app::DisposableBuffer* create() {
            return il2cpp::create_object<app::DisposableBuffer>(get_class());
        }
    } // namespace DisposableBuffer
} // namespace app::classes::types
