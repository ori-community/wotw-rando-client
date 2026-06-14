#pragma once
#include <Modloader/app/structs/VariablesProvider_c_DisplayClass5_0.h>
#include <Modloader/app/structs/VariablesProvider_c_DisplayClass5_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VariablesProvider_c_DisplayClass5_0 {
        inline app::VariablesProvider_c_DisplayClass5_0__Class** type_info() {
            static app::VariablesProvider_c_DisplayClass5_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VariablesProvider_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0473A168));
            }
            return cache;
        }
        inline app::VariablesProvider_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::VariablesProvider_c_DisplayClass5_0__Class>(type_info(), "Moon.ContinuousIntegration", "VariablesProvider", "<>c__DisplayClass5_0");
        }
        inline app::VariablesProvider_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::VariablesProvider_c_DisplayClass5_0>(get_class());
        }
    } // namespace VariablesProvider_c_DisplayClass5_0
} // namespace app::classes::types
