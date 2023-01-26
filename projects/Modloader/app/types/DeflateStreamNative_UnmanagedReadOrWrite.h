#pragma once
#include <Modloader/app/structs/DeflateStreamNative_UnmanagedReadOrWrite.h>
#include <Modloader/app/structs/DeflateStreamNative_UnmanagedReadOrWrite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamNative_UnmanagedReadOrWrite {
        inline app::DeflateStreamNative_UnmanagedReadOrWrite__Class** type_info() {
            static app::DeflateStreamNative_UnmanagedReadOrWrite__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflateStreamNative_UnmanagedReadOrWrite__Class**)(modloader::win::memory::resolve_rva(0x04711CF0));
            }
            return cache;
        }
        inline app::DeflateStreamNative_UnmanagedReadOrWrite__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStreamNative_UnmanagedReadOrWrite__Class>(type_info(), "System.IO.Compression", "DeflateStreamNative", "UnmanagedReadOrWrite");
        }
        inline app::DeflateStreamNative_UnmanagedReadOrWrite* create() {
            return il2cpp::create_object<app::DeflateStreamNative_UnmanagedReadOrWrite>(get_class());
        }
    } // namespace DeflateStreamNative_UnmanagedReadOrWrite
} // namespace app::classes::types
