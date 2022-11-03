#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastEncoder {
        inline app::FastEncoder__Class** type_info = (app::FastEncoder__Class**)(modloader::win::memory::resolve_rva(0x0471C6D0));
        inline app::FastEncoder__Class* get_class() {
            return il2cpp::get_class<app::FastEncoder__Class>(type_info, "Unity.IO.Compression", "FastEncoder");
        }
        inline app::FastEncoder* create() {
            return il2cpp::create_object<app::FastEncoder>(get_class());
        }
    } // namespace FastEncoder
} // namespace app::classes::types
