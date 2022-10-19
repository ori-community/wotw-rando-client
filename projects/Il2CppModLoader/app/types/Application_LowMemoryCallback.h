#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Application_LowMemoryCallback {
        namespace {
            inline app::Application_LowMemoryCallback__Class* type_info_ref = nullptr;
        }
        inline app::Application_LowMemoryCallback__Class** type_info = &type_info_ref;
        inline app::Application_LowMemoryCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_LowMemoryCallback__Class>(type_info, "UnityEngine", "Application", "LowMemoryCallback");
        }
        inline app::Application_LowMemoryCallback* create() {
            return il2cpp::create_object<app::Application_LowMemoryCallback>(get_class());
        }
    } // namespace Application_LowMemoryCallback
} // namespace app::classes::types
