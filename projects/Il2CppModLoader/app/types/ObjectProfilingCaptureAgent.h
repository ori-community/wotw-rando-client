#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilingCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectProfilingCaptureAgent__Class** type_info;
        inline app::ObjectProfilingCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilingCaptureAgent__Class>(type_info, "", "ObjectProfilingCaptureAgent");
        }
        inline app::ObjectProfilingCaptureAgent* create() {
            return il2cpp::create_object<app::ObjectProfilingCaptureAgent>(get_class());
        }
    } // namespace ObjectProfilingCaptureAgent
} // namespace app::classes::types
