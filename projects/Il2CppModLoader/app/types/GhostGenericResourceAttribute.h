#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostGenericResourceAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostGenericResourceAttribute__Class** type_info;
        inline app::GhostGenericResourceAttribute__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericResourceAttribute__Class>(type_info, "", "GhostGenericResourceAttribute");
        }
        inline app::GhostGenericResourceAttribute* create() {
            return il2cpp::create_object<app::GhostGenericResourceAttribute>(get_class());
        }
        inline app::GhostGenericResourceAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostGenericResourceAttribute__Array>(get_class(), size);
        }
        inline app::GhostGenericResourceAttribute__Array* create_array(const std::vector<app::GhostGenericResourceAttribute*>& items) {
            return il2cpp::array_new<app::GhostGenericResourceAttribute__Array>(get_class(), items);
        }
    } // namespace GhostGenericResourceAttribute
} // namespace app::classes::types
