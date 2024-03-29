#pragma once
#include <Modloader/app/structs/DeflateStreamNative_SafeDeflateStreamHandle.h>
#include <Modloader/app/structs/DeflateStreamNative_SafeDeflateStreamHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamNative_SafeDeflateStreamHandle {
        inline app::DeflateStreamNative_SafeDeflateStreamHandle__Class** type_info() {
            static app::DeflateStreamNative_SafeDeflateStreamHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflateStreamNative_SafeDeflateStreamHandle__Class**)(modloader::win::memory::resolve_rva(0x047053A0));
            }
            return cache;
        }
        inline app::DeflateStreamNative_SafeDeflateStreamHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStreamNative_SafeDeflateStreamHandle__Class>(type_info(), "System.IO.Compression", "DeflateStreamNative", "SafeDeflateStreamHandle");
        }
        inline app::DeflateStreamNative_SafeDeflateStreamHandle* create() {
            return il2cpp::create_object<app::DeflateStreamNative_SafeDeflateStreamHandle>(get_class());
        }
    } // namespace DeflateStreamNative_SafeDeflateStreamHandle
} // namespace app::classes::types
