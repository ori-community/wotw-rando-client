#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICustomAttributeProvider {
        inline app::ICustomAttributeProvider__Class** type_info = (app::ICustomAttributeProvider__Class**)(modloader::win::memory::resolve_rva(0x0470F310));
        inline app::ICustomAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::ICustomAttributeProvider__Class>(type_info, "System.Reflection", "ICustomAttributeProvider");
        }
    } // namespace ICustomAttributeProvider
} // namespace app::classes::types
