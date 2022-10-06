#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritSentry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritSentry__Class** type_info;
        inline app::SpiritSentry__Class* get_class() {
            return il2cpp::get_class<app::SpiritSentry__Class>(type_info, "", "SpiritSentry");
        }
        inline app::SpiritSentry* create() {
            return il2cpp::create_object<app::SpiritSentry>(get_class());
        }
        inline app::SpiritSentry__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritSentry__Array>(get_class(), size);
        }
        inline app::SpiritSentry__Array* create_array(const std::vector<app::SpiritSentry*>& items) {
            return il2cpp::array_new<app::SpiritSentry__Array>(get_class(), items);
        }
    } // namespace SpiritSentry
} // namespace app::classes::types
