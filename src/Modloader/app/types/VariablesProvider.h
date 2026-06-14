#pragma once
#include <Modloader/app/structs/VariablesProvider.h>
#include <Modloader/app/structs/VariablesProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VariablesProvider {
        inline app::VariablesProvider__Class** type_info() {
            static app::VariablesProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VariablesProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VariablesProvider__Class* get_class() {
            return il2cpp::get_class<app::VariablesProvider__Class>(type_info(), "Moon.ContinuousIntegration", "VariablesProvider");
        }
        inline app::VariablesProvider* create() {
            return il2cpp::create_object<app::VariablesProvider>(get_class());
        }
    } // namespace VariablesProvider
} // namespace app::classes::types
