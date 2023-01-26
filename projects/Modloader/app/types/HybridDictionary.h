#pragma once
#include <Modloader/app/structs/HybridDictionary.h>
#include <Modloader/app/structs/HybridDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HybridDictionary {
        inline app::HybridDictionary__Class** type_info() {
            static app::HybridDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HybridDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475CF60));
            }
            return cache;
        }
        inline app::HybridDictionary__Class* get_class() {
            return il2cpp::get_class<app::HybridDictionary__Class>(type_info(), "System.Collections.Specialized", "HybridDictionary");
        }
        inline app::HybridDictionary* create() {
            return il2cpp::create_object<app::HybridDictionary>(get_class());
        }
    } // namespace HybridDictionary
} // namespace app::classes::types
