#pragma once
#include <Modloader/app/structs/ChunkedInputStream_ReadBufferState.h>
#include <Modloader/app/structs/ChunkedInputStream_ReadBufferState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChunkedInputStream_ReadBufferState {
        inline app::ChunkedInputStream_ReadBufferState__Class** type_info() {
            static app::ChunkedInputStream_ReadBufferState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChunkedInputStream_ReadBufferState__Class**)(modloader::win::memory::resolve_rva(0x04752AE8));
            }
            return cache;
        }
        inline app::ChunkedInputStream_ReadBufferState__Class* get_class() {
            return il2cpp::get_nested_class<app::ChunkedInputStream_ReadBufferState__Class>(type_info(), "System.Net", "ChunkedInputStream", "ReadBufferState");
        }
        inline app::ChunkedInputStream_ReadBufferState* create() {
            return il2cpp::create_object<app::ChunkedInputStream_ReadBufferState>(get_class());
        }
    } // namespace ChunkedInputStream_ReadBufferState
} // namespace app::classes::types
