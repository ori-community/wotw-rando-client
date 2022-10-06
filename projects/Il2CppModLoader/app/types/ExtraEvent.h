#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtraEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtraEvent__Class** type_info;
        inline app::ExtraEvent__Class* get_class() {
            return il2cpp::get_class<app::ExtraEvent__Class>(type_info, "PhysicsDebugTools", "ExtraEvent");
        }
        inline app::ExtraEvent* create() {
            return il2cpp::create_object<app::ExtraEvent>(get_class());
        }
        inline app::ExtraEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::ExtraEvent__Array>(get_class(), size);
        }
        inline app::ExtraEvent__Array* create_array(const std::vector<app::ExtraEvent*>& items) {
            return il2cpp::array_new<app::ExtraEvent__Array>(get_class(), items);
        }
    } // namespace ExtraEvent
} // namespace app::classes::types
