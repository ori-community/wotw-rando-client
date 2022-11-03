#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MCMDictionary {
        inline app::MCMDictionary__Class** type_info = (app::MCMDictionary__Class**)(modloader::win::memory::resolve_rva(0x047646E8));
        inline app::MCMDictionary__Class* get_class() {
            return il2cpp::get_class<app::MCMDictionary__Class>(type_info, "System.Runtime.Remoting.Messaging", "MCMDictionary");
        }
        inline app::MCMDictionary* create() {
            return il2cpp::create_object<app::MCMDictionary>(get_class());
        }
    } // namespace MCMDictionary
} // namespace app::classes::types
