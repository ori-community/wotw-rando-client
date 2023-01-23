#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeflateStream__Class.h>
#include <Modloader/app/structs/DeflateStream.h>

namespace app::classes::types {
    namespace DeflateStream {
        inline app::DeflateStream__Class** type_info = (app::DeflateStream__Class**)(modloader::win::memory::resolve_rva(0x04783998));
        inline app::DeflateStream__Class* get_class() {
            return il2cpp::get_class<app::DeflateStream__Class>(type_info, "System.IO.Compression", "DeflateStream");
        }
        inline app::DeflateStream* create() {
            return il2cpp::create_object<app::DeflateStream>(get_class());
        }
    } // namespace DeflateStream
} // namespace app::classes::types
