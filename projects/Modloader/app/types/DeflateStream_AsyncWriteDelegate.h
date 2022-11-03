#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateStream_AsyncWriteDelegate {
        inline app::DeflateStream_AsyncWriteDelegate__Class** type_info = (app::DeflateStream_AsyncWriteDelegate__Class**)(modloader::win::memory::resolve_rva(0x04741618));
        inline app::DeflateStream_AsyncWriteDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_AsyncWriteDelegate__Class>(type_info, "Unity.IO.Compression", "DeflateStream", "AsyncWriteDelegate");
        }
        inline app::DeflateStream_AsyncWriteDelegate* create() {
            return il2cpp::create_object<app::DeflateStream_AsyncWriteDelegate>(get_class());
        }
    } // namespace DeflateStream_AsyncWriteDelegate
} // namespace app::classes::types
