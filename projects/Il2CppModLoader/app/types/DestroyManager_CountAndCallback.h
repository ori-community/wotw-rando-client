#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyManager_CountAndCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DestroyManager_CountAndCallback__Class** type_info;
        inline app::DestroyManager_CountAndCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DestroyManager_CountAndCallback__Class>(type_info, "", "DestroyManager", "CountAndCallback");
        }
        inline app::DestroyManager_CountAndCallback* create() {
            return il2cpp::create_object<app::DestroyManager_CountAndCallback>(get_class());
        }
        inline app::DestroyManager_CountAndCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::DestroyManager_CountAndCallback__Array>(get_class(), size);
        }
    } // namespace DestroyManager_CountAndCallback
} // namespace app::classes::types
