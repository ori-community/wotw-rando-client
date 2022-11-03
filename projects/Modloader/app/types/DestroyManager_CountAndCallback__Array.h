#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyManager_CountAndCallback__Array {
        namespace {
            inline app::DestroyManager_CountAndCallback__Array__Class* type_info_ref = nullptr;
        }
        inline app::DestroyManager_CountAndCallback__Array__Class** type_info = &type_info_ref;
        inline app::DestroyManager_CountAndCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::DestroyManager_CountAndCallback__Array__Class>(type_info, "", "DestroyManager+CountAndCallback[]");
        }
        inline app::DestroyManager_CountAndCallback__Array* create() {
            return il2cpp::create_object<app::DestroyManager_CountAndCallback__Array>(get_class());
        }
    } // namespace DestroyManager_CountAndCallback__Array
} // namespace app::classes::types
