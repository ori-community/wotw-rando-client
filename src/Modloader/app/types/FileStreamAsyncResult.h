#pragma once
#include <Modloader/app/structs/FileStreamAsyncResult.h>
#include <Modloader/app/structs/FileStreamAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileStreamAsyncResult {
        inline app::FileStreamAsyncResult__Class** type_info() {
            static app::FileStreamAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileStreamAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0474B9B8));
            }
            return cache;
        }
        inline app::FileStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::FileStreamAsyncResult__Class>(type_info(), "System.IO", "FileStreamAsyncResult");
        }
        inline app::FileStreamAsyncResult* create() {
            return il2cpp::create_object<app::FileStreamAsyncResult>(get_class());
        }
    } // namespace FileStreamAsyncResult
} // namespace app::classes::types
