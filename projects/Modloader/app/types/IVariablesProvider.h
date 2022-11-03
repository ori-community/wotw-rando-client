#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVariablesProvider {
        namespace {
            inline app::IVariablesProvider__Class* type_info_ref = nullptr;
        }
        inline app::IVariablesProvider__Class** type_info = &type_info_ref;
        inline app::IVariablesProvider__Class* get_class() {
            return il2cpp::get_class<app::IVariablesProvider__Class>(type_info, "Moon.ContinuousIntegration", "IVariablesProvider");
        }
    } // namespace IVariablesProvider
} // namespace app::classes::types
