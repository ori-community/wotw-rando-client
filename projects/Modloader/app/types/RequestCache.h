#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestCache {
        inline app::RequestCache__Class** type_info = (app::RequestCache__Class**)(modloader::win::memory::resolve_rva(0x047308C8));
        inline app::RequestCache__Class* get_class() {
            return il2cpp::get_class<app::RequestCache__Class>(type_info, "System.Net.Cache", "RequestCache");
        }
        inline app::RequestCache* create() {
            return il2cpp::create_object<app::RequestCache>(get_class());
        }
    } // namespace RequestCache
} // namespace app::classes::types
