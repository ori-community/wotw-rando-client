#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateStreamAsyncResult {
        inline app::DeflateStreamAsyncResult__Class** type_info = (app::DeflateStreamAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04799200));
        inline app::DeflateStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::DeflateStreamAsyncResult__Class>(type_info, "Unity.IO.Compression", "DeflateStreamAsyncResult");
        }
        inline app::DeflateStreamAsyncResult* create() {
            return il2cpp::create_object<app::DeflateStreamAsyncResult>(get_class());
        }
    } // namespace DeflateStreamAsyncResult
} // namespace app::classes::types
