#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChameleonKey {
        inline app::ChameleonKey__Class** type_info = (app::ChameleonKey__Class**)(modloader::win::memory::resolve_rva(0x047830E8));
        inline app::ChameleonKey__Class* get_class() {
            return il2cpp::get_class<app::ChameleonKey__Class>(type_info, "System.Xml.Schema", "ChameleonKey");
        }
        inline app::ChameleonKey* create() {
            return il2cpp::create_object<app::ChameleonKey>(get_class());
        }
    } // namespace ChameleonKey
} // namespace app::classes::types
