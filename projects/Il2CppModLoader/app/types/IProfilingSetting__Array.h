#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IProfilingSetting__Array {
        namespace {
            inline app::IProfilingSetting__Array__Class* type_info_ref = nullptr;
        }
        inline app::IProfilingSetting__Array__Class** type_info = &type_info_ref;
        inline app::IProfilingSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::IProfilingSetting__Array__Class>(type_info, "Moon.Telemetry.Performance.Settings", "IProfilingSetting[]");
        }
        inline app::IProfilingSetting__Array* create() {
            return il2cpp::create_object<app::IProfilingSetting__Array>(get_class());
        }
    } // namespace IProfilingSetting__Array
} // namespace app::classes::types
