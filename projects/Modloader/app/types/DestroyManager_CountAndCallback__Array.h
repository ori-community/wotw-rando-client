#pragma once
#include <Modloader/app/structs/DestroyManager_CountAndCallback__Array.h>
#include <Modloader/app/structs/DestroyManager_CountAndCallback__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyManager_CountAndCallback__Array {
        inline app::DestroyManager_CountAndCallback__Array__Class** type_info() {
            static app::DestroyManager_CountAndCallback__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyManager_CountAndCallback__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyManager_CountAndCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::DestroyManager_CountAndCallback__Array__Class>(type_info(), "", "DestroyManager+CountAndCallback[]");
        }
        inline app::DestroyManager_CountAndCallback__Array* create() {
            return il2cpp::create_object<app::DestroyManager_CountAndCallback__Array>(get_class());
        }
    } // namespace DestroyManager_CountAndCallback__Array
} // namespace app::classes::types
