#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZlibException {
        inline app::ZlibException__Class** type_info = (app::ZlibException__Class**)(modloader::win::memory::resolve_rva(0x04757328));
        inline app::ZlibException__Class* get_class() {
            return il2cpp::get_class<app::ZlibException__Class>(type_info, "Ionic.Zlib", "ZlibException");
        }
        inline app::ZlibException* create() {
            return il2cpp::create_object<app::ZlibException>(get_class());
        }
    } // namespace ZlibException
} // namespace app::classes::types
