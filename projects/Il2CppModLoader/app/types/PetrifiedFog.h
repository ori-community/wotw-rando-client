#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedFog {
        inline app::PetrifiedFog__Class** type_info = (app::PetrifiedFog__Class**)(modloader::win::memory::resolve_rva(0x04765128));
        inline app::PetrifiedFog__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedFog__Class>(type_info, "", "PetrifiedFog");
        }
        inline app::PetrifiedFog* create() {
            return il2cpp::create_object<app::PetrifiedFog>(get_class());
        }
        inline app::PetrifiedFog__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedFog__Array>(get_class(), size);
        }
        inline app::PetrifiedFog__Array* create_array(const std::vector<app::PetrifiedFog*>& items) {
            return il2cpp::array_new<app::PetrifiedFog__Array>(get_class(), items);
        }
    } // namespace PetrifiedFog
} // namespace app::classes::types
