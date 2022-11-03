#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultCameraProviderEntry__Array {
        namespace {
            inline app::DefaultCameraProviderEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::DefaultCameraProviderEntry__Array__Class** type_info = &type_info_ref;
        inline app::DefaultCameraProviderEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DefaultCameraProviderEntry__Array__Class>(type_info, "", "DefaultCameraProviderEntry[]");
        }
        inline app::DefaultCameraProviderEntry__Array* create() {
            return il2cpp::create_object<app::DefaultCameraProviderEntry__Array>(get_class());
        }
    } // namespace DefaultCameraProviderEntry__Array
} // namespace app::classes::types
