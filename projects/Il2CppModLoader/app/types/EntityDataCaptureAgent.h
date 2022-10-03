#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDataCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityDataCaptureAgent__Class** type_info;
        inline app::EntityDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::EntityDataCaptureAgent__Class>(type_info, "", "EntityDataCaptureAgent");
        }
        inline app::EntityDataCaptureAgent* create() {
            return il2cpp::create_object<app::EntityDataCaptureAgent>(get_class());
        }
    } // namespace EntityDataCaptureAgent
} // namespace app::classes::types
