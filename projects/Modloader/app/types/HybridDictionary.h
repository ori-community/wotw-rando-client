#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HybridDictionary {
        inline app::HybridDictionary__Class** type_info = (app::HybridDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475CF60));
        inline app::HybridDictionary__Class* get_class() {
            return il2cpp::get_class<app::HybridDictionary__Class>(type_info, "System.Collections.Specialized", "HybridDictionary");
        }
        inline app::HybridDictionary* create() {
            return il2cpp::create_object<app::HybridDictionary>(get_class());
        }
    } // namespace HybridDictionary
} // namespace app::classes::types
