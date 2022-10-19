#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightInfluence {
        inline app::LightInfluence__Class** type_info = (app::LightInfluence__Class**)(modloader::win::memory::resolve_rva(0x0476AFB8));
        inline app::LightInfluence__Class* get_class() {
            return il2cpp::get_class<app::LightInfluence__Class>(type_info, "", "LightInfluence");
        }
        inline app::LightInfluence* create() {
            return il2cpp::create_object<app::LightInfluence>(get_class());
        }
        inline app::LightInfluence__Array* create_array(int size) {
            return il2cpp::array_new<app::LightInfluence__Array>(get_class(), size);
        }
        inline app::LightInfluence__Array* create_array(const std::vector<app::LightInfluence*>& items) {
            return il2cpp::array_new<app::LightInfluence__Array>(get_class(), items);
        }
    } // namespace LightInfluence
} // namespace app::classes::types
