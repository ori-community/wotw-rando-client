#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultProxySectionInternal {
        inline app::DefaultProxySectionInternal__Class** type_info = (app::DefaultProxySectionInternal__Class**)(modloader::win::memory::resolve_rva(0x047553A8));
        inline app::DefaultProxySectionInternal__Class* get_class() {
            return il2cpp::get_class<app::DefaultProxySectionInternal__Class>(type_info, "System.Net.Configuration", "DefaultProxySectionInternal");
        }
        inline app::DefaultProxySectionInternal* create() {
            return il2cpp::create_object<app::DefaultProxySectionInternal>(get_class());
        }
    } // namespace DefaultProxySectionInternal
} // namespace app::classes::types
