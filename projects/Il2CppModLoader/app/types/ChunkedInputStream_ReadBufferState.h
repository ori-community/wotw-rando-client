#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChunkedInputStream_ReadBufferState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChunkedInputStream_ReadBufferState__Class** type_info;
        inline app::ChunkedInputStream_ReadBufferState__Class* get_class() {
            return il2cpp::get_nested_class<app::ChunkedInputStream_ReadBufferState__Class>(type_info, "System.Net", "ChunkedInputStream", "ReadBufferState");
        }
        inline app::ChunkedInputStream_ReadBufferState* create() {
            return il2cpp::create_object<app::ChunkedInputStream_ReadBufferState>(get_class());
        }
    } // namespace ChunkedInputStream_ReadBufferState
} // namespace app::classes::types
