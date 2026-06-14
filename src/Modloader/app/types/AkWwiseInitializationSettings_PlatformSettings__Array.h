#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Array.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_PlatformSettings__Array {
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array__Class** type_info() {
            static app::AkWwiseInitializationSettings_PlatformSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWwiseInitializationSettings_PlatformSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseInitializationSettings_PlatformSettings__Array__Class>(type_info(), "", "AkWwiseInitializationSettings+PlatformSettings[]");
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_PlatformSettings__Array>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_PlatformSettings__Array
} // namespace app::classes::types
