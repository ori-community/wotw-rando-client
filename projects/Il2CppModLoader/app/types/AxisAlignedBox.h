#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisAlignedBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AxisAlignedBox__Class** type_info;
        inline app::AxisAlignedBox__Class* get_class() {
            return il2cpp::get_class<app::AxisAlignedBox__Class>(type_info, "Moon", "AxisAlignedBox");
        }
        inline app::AxisAlignedBox* create() {
            return il2cpp::create_object<app::AxisAlignedBox>(get_class());
        }
        inline app::AxisAlignedBox__Array* create_array(int size) {
            return il2cpp::array_new<app::AxisAlignedBox__Array>(get_class(), size);
        }
    } // namespace AxisAlignedBox
} // namespace app::classes::types
