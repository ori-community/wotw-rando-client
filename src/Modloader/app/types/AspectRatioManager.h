#pragma once
#include <Modloader/app/structs/AspectRatioManager.h>
#include <Modloader/app/structs/AspectRatioManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AspectRatioManager {
        inline app::AspectRatioManager__Class** type_info() {
            static app::AspectRatioManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AspectRatioManager__Class**)(modloader::win::memory::resolve_rva(0x047568B0));
            }
            return cache;
        }
        inline app::AspectRatioManager__Class* get_class() {
            return il2cpp::get_class<app::AspectRatioManager__Class>(type_info(), "", "AspectRatioManager");
        }
        inline app::AspectRatioManager* create() {
            return il2cpp::create_object<app::AspectRatioManager>(get_class());
        }
    } // namespace AspectRatioManager
} // namespace app::classes::types
