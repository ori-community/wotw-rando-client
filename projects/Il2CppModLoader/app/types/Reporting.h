#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Reporting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Reporting__Class** type_info;
        inline app::Reporting__Class* get_class() {
            return il2cpp::get_class<app::Reporting__Class>(type_info, "Moon.ContinuousIntegration", "Reporting");
        }
        inline app::Reporting* create() {
            return il2cpp::create_object<app::Reporting>(get_class());
        }
    } // namespace Reporting
} // namespace app::classes::types
