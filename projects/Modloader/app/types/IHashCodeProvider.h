#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IHashCodeProvider {
        inline app::IHashCodeProvider__Class** type_info = (app::IHashCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x04709EE0));
        inline app::IHashCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::IHashCodeProvider__Class>(type_info, "System.Collections", "IHashCodeProvider");
        }
    } // namespace IHashCodeProvider
} // namespace app::classes::types
