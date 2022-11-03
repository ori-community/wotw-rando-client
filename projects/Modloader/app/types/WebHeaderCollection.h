#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebHeaderCollection {
        inline app::WebHeaderCollection__Class** type_info = (app::WebHeaderCollection__Class**)(modloader::win::memory::resolve_rva(0x0477B2E8));
        inline app::WebHeaderCollection__Class* get_class() {
            return il2cpp::get_class<app::WebHeaderCollection__Class>(type_info, "System.Net", "WebHeaderCollection");
        }
        inline app::WebHeaderCollection* create() {
            return il2cpp::create_object<app::WebHeaderCollection>(get_class());
        }
    } // namespace WebHeaderCollection
} // namespace app::classes::types
