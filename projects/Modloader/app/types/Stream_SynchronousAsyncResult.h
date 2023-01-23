#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Stream_SynchronousAsyncResult__Class.h>
#include <Modloader/app/structs/Stream_SynchronousAsyncResult.h>

namespace app::classes::types {
    namespace Stream_SynchronousAsyncResult {
        inline app::Stream_SynchronousAsyncResult__Class** type_info = (app::Stream_SynchronousAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04788540));
        inline app::Stream_SynchronousAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_SynchronousAsyncResult__Class>(type_info, "System.IO", "Stream", "SynchronousAsyncResult");
        }
        inline app::Stream_SynchronousAsyncResult* create() {
            return il2cpp::create_object<app::Stream_SynchronousAsyncResult>(get_class());
        }
    } // namespace Stream_SynchronousAsyncResult
} // namespace app::classes::types
