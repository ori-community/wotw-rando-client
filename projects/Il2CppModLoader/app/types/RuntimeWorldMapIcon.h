#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeWorldMapIcon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeWorldMapIcon__Class** type_info;
        inline app::RuntimeWorldMapIcon__Class* get_class() {
            return il2cpp::get_class<app::RuntimeWorldMapIcon__Class>(type_info, "", "RuntimeWorldMapIcon");
        }
        inline app::RuntimeWorldMapIcon* create() {
            return il2cpp::create_object<app::RuntimeWorldMapIcon>(get_class());
        }
        inline app::RuntimeWorldMapIcon__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeWorldMapIcon__Array>(get_class(), size);
        }
    } // namespace RuntimeWorldMapIcon
} // namespace app::classes::types
