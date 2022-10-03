#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyManager_CountAndCallback__Array {
        namespace {
            app::DestroyManager_CountAndCallback__Array__Class* type_info_ref = nullptr;
        }
        app::DestroyManager_CountAndCallback__Array__Class** type_info = &type_info_ref;
        inline app::DestroyManager_CountAndCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::DestroyManager_CountAndCallback__Array__Class>(type_info, "", "DestroyManager+CountAndCallback[]");
        }
        inline app::DestroyManager_CountAndCallback__Array* create() {
            return il2cpp::create_object<app::DestroyManager_CountAndCallback__Array>(get_class());
        }
    } // namespace DestroyManager_CountAndCallback__Array
} // namespace app::classes::types
