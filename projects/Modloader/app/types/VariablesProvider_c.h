#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VariablesProvider_c {
        inline app::VariablesProvider_c__Class** type_info = (app::VariablesProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04766EF0));
        inline app::VariablesProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VariablesProvider_c__Class>(type_info, "Moon.ContinuousIntegration", "VariablesProvider", "<>c");
        }
        inline app::VariablesProvider_c* create() {
            return il2cpp::create_object<app::VariablesProvider_c>(get_class());
        }
    } // namespace VariablesProvider_c
} // namespace app::classes::types
