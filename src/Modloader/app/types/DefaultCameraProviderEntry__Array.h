#pragma once
#include <Modloader/app/structs/DefaultCameraProviderEntry__Array.h>
#include <Modloader/app/structs/DefaultCameraProviderEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultCameraProviderEntry__Array {
        inline app::DefaultCameraProviderEntry__Array__Class** type_info() {
            static app::DefaultCameraProviderEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultCameraProviderEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultCameraProviderEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DefaultCameraProviderEntry__Array__Class>(type_info(), "", "DefaultCameraProviderEntry[]");
        }
        inline app::DefaultCameraProviderEntry__Array* create() {
            return il2cpp::create_object<app::DefaultCameraProviderEntry__Array>(get_class());
        }
    } // namespace DefaultCameraProviderEntry__Array
} // namespace app::classes::types
