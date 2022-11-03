#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringCollection {
        inline app::StringCollection__Class** type_info = (app::StringCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F948));
        inline app::StringCollection__Class* get_class() {
            return il2cpp::get_class<app::StringCollection__Class>(type_info, "System.Collections.Specialized", "StringCollection");
        }
        inline app::StringCollection* create() {
            return il2cpp::create_object<app::StringCollection>(get_class());
        }
    } // namespace StringCollection
} // namespace app::classes::types
