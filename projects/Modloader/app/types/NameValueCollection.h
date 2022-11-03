#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameValueCollection {
        inline app::NameValueCollection__Class** type_info = (app::NameValueCollection__Class**)(modloader::win::memory::resolve_rva(0x047136B0));
        inline app::NameValueCollection__Class* get_class() {
            return il2cpp::get_class<app::NameValueCollection__Class>(type_info, "System.Collections.Specialized", "NameValueCollection");
        }
        inline app::NameValueCollection* create() {
            return il2cpp::create_object<app::NameValueCollection>(get_class());
        }
    } // namespace NameValueCollection
} // namespace app::classes::types
