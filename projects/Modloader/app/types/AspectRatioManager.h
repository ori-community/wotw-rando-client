#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AspectRatioManager {
        inline app::AspectRatioManager__Class** type_info = (app::AspectRatioManager__Class**)(modloader::win::memory::resolve_rva(0x047568B0));
        inline app::AspectRatioManager__Class* get_class() {
            return il2cpp::get_class<app::AspectRatioManager__Class>(type_info, "", "AspectRatioManager");
        }
        inline app::AspectRatioManager* create() {
            return il2cpp::create_object<app::AspectRatioManager>(get_class());
        }
    } // namespace AspectRatioManager
} // namespace app::classes::types
