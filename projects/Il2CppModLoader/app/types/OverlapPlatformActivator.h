#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverlapPlatformActivator {
        namespace {
            inline app::OverlapPlatformActivator__Class* type_info_ref = nullptr;
        }
        inline app::OverlapPlatformActivator__Class** type_info = &type_info_ref;
        inline app::OverlapPlatformActivator__Class* get_class() {
            return il2cpp::get_class<app::OverlapPlatformActivator__Class>(type_info, "", "OverlapPlatformActivator");
        }
        inline app::OverlapPlatformActivator* create() {
            return il2cpp::create_object<app::OverlapPlatformActivator>(get_class());
        }
    } // namespace OverlapPlatformActivator
} // namespace app::classes::types
