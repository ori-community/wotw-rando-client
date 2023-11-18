#pragma once
#include <Modloader/app/structs/ResolutionOptions_c_DisplayClass5_0.h>
#include <Modloader/app/structs/ResolutionOptions_c_DisplayClass5_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResolutionOptions_c_DisplayClass5_0 {
        inline app::ResolutionOptions_c_DisplayClass5_0__Class** type_info() {
            static app::ResolutionOptions_c_DisplayClass5_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResolutionOptions_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x04760B68));
            }
            return cache;
        }
        inline app::ResolutionOptions_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ResolutionOptions_c_DisplayClass5_0__Class>(type_info(), "", "ResolutionOptions", "<>c__DisplayClass5_0");
        }
        inline app::ResolutionOptions_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::ResolutionOptions_c_DisplayClass5_0>(get_class());
        }
    } // namespace ResolutionOptions_c_DisplayClass5_0
} // namespace app::classes::types
