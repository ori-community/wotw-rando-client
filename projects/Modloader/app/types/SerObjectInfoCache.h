#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerObjectInfoCache {
        inline app::SerObjectInfoCache__Class** type_info = (app::SerObjectInfoCache__Class**)(modloader::win::memory::resolve_rva(0x04736940));
        inline app::SerObjectInfoCache__Class* get_class() {
            return il2cpp::get_class<app::SerObjectInfoCache__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");
        }
        inline app::SerObjectInfoCache* create() {
            return il2cpp::create_object<app::SerObjectInfoCache>(get_class());
        }
    } // namespace SerObjectInfoCache
} // namespace app::classes::types
