#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Array__Class.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Array.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_PlatformSettings__Array {
        namespace {
            inline app::AkWwiseInitializationSettings_PlatformSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array__Class** type_info = &type_info_ref;
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseInitializationSettings_PlatformSettings__Array__Class>(type_info, "", "AkWwiseInitializationSettings+PlatformSettings[]");
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_PlatformSettings__Array>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_PlatformSettings__Array
} // namespace app::classes::types
