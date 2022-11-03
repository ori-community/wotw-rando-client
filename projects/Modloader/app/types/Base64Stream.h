#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Base64Stream {
        inline app::Base64Stream__Class** type_info = (app::Base64Stream__Class**)(modloader::win::memory::resolve_rva(0x04777EE0));
        inline app::Base64Stream__Class* get_class() {
            return il2cpp::get_class<app::Base64Stream__Class>(type_info, "System.Net", "Base64Stream");
        }
        inline app::Base64Stream* create() {
            return il2cpp::create_object<app::Base64Stream>(get_class());
        }
    } // namespace Base64Stream
} // namespace app::classes::types
