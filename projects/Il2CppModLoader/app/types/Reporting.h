#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Reporting {
        inline app::Reporting__Class** type_info = (app::Reporting__Class**)(modloader::win::memory::resolve_rva(0x04749770));
        inline app::Reporting__Class* get_class() {
            return il2cpp::get_class<app::Reporting__Class>(type_info, "Moon.ContinuousIntegration", "Reporting");
        }
        inline app::Reporting* create() {
            return il2cpp::create_object<app::Reporting>(get_class());
        }
    } // namespace Reporting
} // namespace app::classes::types
