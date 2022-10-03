#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stream_SynchronousAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stream_SynchronousAsyncResult__Class** type_info;
        inline app::Stream_SynchronousAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_SynchronousAsyncResult__Class>(type_info, "System.IO", "Stream", "SynchronousAsyncResult");
        }
        inline app::Stream_SynchronousAsyncResult* create() {
            return il2cpp::create_object<app::Stream_SynchronousAsyncResult>(get_class());
        }
    } // namespace Stream_SynchronousAsyncResult
} // namespace app::classes::types
