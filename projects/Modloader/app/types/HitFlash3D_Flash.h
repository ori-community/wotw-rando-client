#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitFlash3D_Flash__Class.h>
#include <Modloader/app/structs/HitFlash3D_Flash.h>
#include <Modloader/app/structs/HitFlash3D_Flash__Array.h>

namespace app::classes::types {
    namespace HitFlash3D_Flash {
        inline app::HitFlash3D_Flash__Class** type_info = (app::HitFlash3D_Flash__Class**)(modloader::win::memory::resolve_rva(0x0476FE70));
        inline app::HitFlash3D_Flash__Class* get_class() {
            return il2cpp::get_nested_class<app::HitFlash3D_Flash__Class>(type_info, "", "HitFlash3D", "Flash");
        }
        inline app::HitFlash3D_Flash* create() {
            return il2cpp::create_object<app::HitFlash3D_Flash>(get_class());
        }
        inline app::HitFlash3D_Flash__Array* create_array(int size) {
            return il2cpp::array_new<app::HitFlash3D_Flash__Array>(get_class(), size);
        }
        inline app::HitFlash3D_Flash__Array* create_array(const std::vector<app::HitFlash3D_Flash*>& items) {
            return il2cpp::array_new<app::HitFlash3D_Flash__Array>(get_class(), items);
        }
    } // namespace HitFlash3D_Flash
} // namespace app::classes::types
