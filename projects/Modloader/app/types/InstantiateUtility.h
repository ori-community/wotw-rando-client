#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateUtility {
        inline app::InstantiateUtility__Class** type_info = (app::InstantiateUtility__Class**)(modloader::win::memory::resolve_rva(0x04721660));
        inline app::InstantiateUtility__Class* get_class() {
            return il2cpp::get_class<app::InstantiateUtility__Class>(type_info, "", "InstantiateUtility");
        }
        inline app::InstantiateUtility* create() {
            return il2cpp::create_object<app::InstantiateUtility>(get_class());
        }
    } // namespace InstantiateUtility
} // namespace app::classes::types
