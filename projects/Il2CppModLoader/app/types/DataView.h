#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataView__Class** type_info;
        inline app::DataView__Class* get_class() {
            return il2cpp::get_class<app::DataView__Class>(type_info, "System.Data", "DataView");
        }
        inline app::DataView* create() {
            return il2cpp::create_object<app::DataView>(get_class());
        }
        inline app::DataView__Array* create_array(int size) {
            return il2cpp::array_new<app::DataView__Array>(get_class(), size);
        }
    } // namespace DataView
} // namespace app::classes::types
