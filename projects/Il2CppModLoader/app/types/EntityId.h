#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityId__Class** type_info;
        inline app::EntityId__Class* get_class() {
            return il2cpp::get_class<app::EntityId__Class>(type_info, "Moon.Timeline", "EntityId");
        }
        inline app::EntityId* create() {
            return il2cpp::create_object<app::EntityId>(get_class());
        }
        inline app::EntityId__Boxed* box(app::EntityId value) {
            return il2cpp::box_value<app::EntityId__Boxed>(get_class(), value);
        }
        inline app::EntityId__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityId__Array>(get_class(), size);
        }
    } // namespace EntityId
} // namespace app::classes::types
