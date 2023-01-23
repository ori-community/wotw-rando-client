#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ZlibBaseStream__Class.h>
#include <Modloader/app/structs/ZlibBaseStream.h>

namespace app::classes::types {
    namespace ZlibBaseStream {
        inline app::ZlibBaseStream__Class** type_info = (app::ZlibBaseStream__Class**)(modloader::win::memory::resolve_rva(0x0471ADC8));
        inline app::ZlibBaseStream__Class* get_class() {
            return il2cpp::get_class<app::ZlibBaseStream__Class>(type_info, "Ionic.Zlib", "ZlibBaseStream");
        }
        inline app::ZlibBaseStream* create() {
            return il2cpp::create_object<app::ZlibBaseStream>(get_class());
        }
    } // namespace ZlibBaseStream
} // namespace app::classes::types
