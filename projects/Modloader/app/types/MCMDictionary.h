#pragma once
#include <Modloader/app/structs/MCMDictionary.h>
#include <Modloader/app/structs/MCMDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MCMDictionary {
        inline app::MCMDictionary__Class** type_info() {
            static app::MCMDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MCMDictionary__Class**)(modloader::win::memory::resolve_rva(0x047646E8));
            }
            return cache;
        }
        inline app::MCMDictionary__Class* get_class() {
            return il2cpp::get_class<app::MCMDictionary__Class>(type_info(), "System.Runtime.Remoting.Messaging", "MCMDictionary");
        }
        inline app::MCMDictionary* create() {
            return il2cpp::create_object<app::MCMDictionary>(get_class());
        }
    } // namespace MCMDictionary
} // namespace app::classes::types
