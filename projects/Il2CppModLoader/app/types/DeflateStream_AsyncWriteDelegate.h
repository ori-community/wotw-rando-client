#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStream_AsyncWriteDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStream_AsyncWriteDelegate__Class** type_info;
        inline app::DeflateStream_AsyncWriteDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_AsyncWriteDelegate__Class>(type_info, "Unity.IO.Compression", "DeflateStream", "AsyncWriteDelegate");
        }
        inline app::DeflateStream_AsyncWriteDelegate* create() {
            return il2cpp::create_object<app::DeflateStream_AsyncWriteDelegate>(get_class());
        }
    } // namespace DeflateStream_AsyncWriteDelegate
} // namespace app::classes::types
