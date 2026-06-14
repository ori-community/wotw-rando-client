#pragma once
#include <Modloader/app/structs/VariablesProvider_c.h>
#include <Modloader/app/structs/VariablesProvider_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VariablesProvider_c {
        inline app::VariablesProvider_c__Class** type_info() {
            static app::VariablesProvider_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VariablesProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04766EF0));
            }
            return cache;
        }
        inline app::VariablesProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VariablesProvider_c__Class>(type_info(), "Moon.ContinuousIntegration", "VariablesProvider", "<>c");
        }
        inline app::VariablesProvider_c* create() {
            return il2cpp::create_object<app::VariablesProvider_c>(get_class());
        }
    } // namespace VariablesProvider_c
} // namespace app::classes::types
