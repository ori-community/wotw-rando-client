#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericCastManagerFlags {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericCastManagerFlags__Class** type_info;
        inline app::GenericCastManagerFlags__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerFlags__Class>(type_info, "", "GenericCastManagerFlags");
        }
        inline app::GenericCastManagerFlags* create() {
            return il2cpp::create_object<app::GenericCastManagerFlags>(get_class());
        }
        inline app::GenericCastManagerFlags__Boxed* box(app::GenericCastManagerFlags value) {
            return il2cpp::box_value<app::GenericCastManagerFlags__Boxed>(get_class(), value);
        }
    } // namespace GenericCastManagerFlags
} // namespace app::classes::types
