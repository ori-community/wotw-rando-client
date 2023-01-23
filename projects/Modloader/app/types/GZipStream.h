#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GZipStream__Class.h>
#include <Modloader/app/structs/GZipStream.h>

namespace app::classes::types {
    namespace GZipStream {
        inline app::GZipStream__Class** type_info = (app::GZipStream__Class**)(modloader::win::memory::resolve_rva(0x04719238));
        inline app::GZipStream__Class* get_class() {
            return il2cpp::get_class<app::GZipStream__Class>(type_info, "System.IO.Compression", "GZipStream");
        }
        inline app::GZipStream* create() {
            return il2cpp::create_object<app::GZipStream>(get_class());
        }
    } // namespace GZipStream
} // namespace app::classes::types
