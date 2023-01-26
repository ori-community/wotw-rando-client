#pragma once
#include <Modloader/app/structs/IVariablesProvider.h>
#include <Modloader/app/structs/IVariablesProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVariablesProvider {
        inline app::IVariablesProvider__Class** type_info() {
            static app::IVariablesProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IVariablesProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IVariablesProvider__Class* get_class() {
            return il2cpp::get_class<app::IVariablesProvider__Class>(type_info(), "Moon.ContinuousIntegration", "IVariablesProvider");
        }
    } // namespace IVariablesProvider
} // namespace app::classes::types
