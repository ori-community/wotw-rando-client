#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DisposableBuffer__Class.h>
#include <Modloader/app/structs/DisposableBuffer.h>

namespace app::classes::types {
    namespace DisposableBuffer {
        inline app::DisposableBuffer__Class** type_info = (app::DisposableBuffer__Class**)(modloader::win::memory::resolve_rva(0x04713A50));
        inline app::DisposableBuffer__Class* get_class() {
            return il2cpp::get_class<app::DisposableBuffer__Class>(type_info, "XGamingRuntime.Interop", "DisposableBuffer");
        }
        inline app::DisposableBuffer* create() {
            return il2cpp::create_object<app::DisposableBuffer>(get_class());
        }
    } // namespace DisposableBuffer
} // namespace app::classes::types
