#pragma once
#include <Modloader/app/structs/ConstructionCallDictionary.h>
#include <Modloader/app/structs/ConstructionCallDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructionCallDictionary {
        inline app::ConstructionCallDictionary__Class** type_info() {
            static app::ConstructionCallDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstructionCallDictionary__Class**)(modloader::win::memory::resolve_rva(0x047512B0));
            }
            return cache;
        }
        inline app::ConstructionCallDictionary__Class* get_class() {
            return il2cpp::get_class<app::ConstructionCallDictionary__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary");
        }
        inline app::ConstructionCallDictionary* create() {
            return il2cpp::create_object<app::ConstructionCallDictionary>(get_class());
        }
    } // namespace ConstructionCallDictionary
} // namespace app::classes::types
