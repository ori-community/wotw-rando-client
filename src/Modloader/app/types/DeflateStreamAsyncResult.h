#pragma once
#include <Modloader/app/structs/DeflateStreamAsyncResult.h>
#include <Modloader/app/structs/DeflateStreamAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamAsyncResult {
        inline app::DeflateStreamAsyncResult__Class** type_info() {
            static app::DeflateStreamAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflateStreamAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04799200));
            }
            return cache;
        }
        inline app::DeflateStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::DeflateStreamAsyncResult__Class>(type_info(), "Unity.IO.Compression", "DeflateStreamAsyncResult");
        }
        inline app::DeflateStreamAsyncResult* create() {
            return il2cpp::create_object<app::DeflateStreamAsyncResult>(get_class());
        }
    } // namespace DeflateStreamAsyncResult
} // namespace app::classes::types
