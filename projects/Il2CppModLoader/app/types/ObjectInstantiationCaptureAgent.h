#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectInstantiationCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectInstantiationCaptureAgent__Class** type_info;
        inline app::ObjectInstantiationCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ObjectInstantiationCaptureAgent__Class>(type_info, "", "ObjectInstantiationCaptureAgent");
        }
        inline app::ObjectInstantiationCaptureAgent* create() {
            return il2cpp::create_object<app::ObjectInstantiationCaptureAgent>(get_class());
        }
    } // namespace ObjectInstantiationCaptureAgent
} // namespace app::classes::types
