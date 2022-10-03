#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stream_SynchronousAsyncResult_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stream_SynchronousAsyncResult_c__Class** type_info;
        inline app::Stream_SynchronousAsyncResult_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_SynchronousAsyncResult_c__Class>(type_info, "System.IO", "Stream+SynchronousAsyncResult", "<>c");
        }
        inline app::Stream_SynchronousAsyncResult_c* create() {
            return il2cpp::create_object<app::Stream_SynchronousAsyncResult_c>(get_class());
        }
    } // namespace Stream_SynchronousAsyncResult_c
} // namespace app::classes::types
