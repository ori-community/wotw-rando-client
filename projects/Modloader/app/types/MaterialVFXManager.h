#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialVFXManager {
        inline app::MaterialVFXManager__Class** type_info = (app::MaterialVFXManager__Class**)(modloader::win::memory::resolve_rva(0x0471B120));
        inline app::MaterialVFXManager__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXManager__Class>(type_info, "", "MaterialVFXManager");
        }
        inline app::MaterialVFXManager* create() {
            return il2cpp::create_object<app::MaterialVFXManager>(get_class());
        }
    } // namespace MaterialVFXManager
} // namespace app::classes::types
