#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplication {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManager_ExplosionApplication__Class** type_info;
        inline app::UberInteractionManager_ExplosionApplication__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ExplosionApplication__Class>(type_info, "", "UberInteractionManager", "ExplosionApplication");
        }
        inline app::UberInteractionManager_ExplosionApplication* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplication>(get_class());
        }
        inline app::UberInteractionManager_ExplosionApplication__Boxed* box(app::UberInteractionManager_ExplosionApplication value) {
            return il2cpp::box_value<app::UberInteractionManager_ExplosionApplication__Boxed>(get_class(), value);
        }
        inline app::UberInteractionManager_ExplosionApplication__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManager_ExplosionApplication__Array>(get_class(), size);
        }
        inline app::UberInteractionManager_ExplosionApplication__Array* create_array(const std::vector<app::UberInteractionManager_ExplosionApplication__Boxed>& items) {
            return il2cpp::array_new<app::UberInteractionManager_ExplosionApplication__Array>(get_class(), items);
        }
    } // namespace UberInteractionManager_ExplosionApplication
} // namespace app::classes::types
