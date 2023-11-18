#pragma once
#include <Modloader/app/structs/NameOptions_c_DisplayClass19_0.h>
#include <Modloader/app/structs/NameOptions_c_DisplayClass19_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameOptions_c_DisplayClass19_0 {
        inline app::NameOptions_c_DisplayClass19_0__Class** type_info() {
            static app::NameOptions_c_DisplayClass19_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameOptions_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04782DA8));
            }
            return cache;
        }
        inline app::NameOptions_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::NameOptions_c_DisplayClass19_0__Class>(type_info(), "", "NameOptions", "<>c__DisplayClass19_0");
        }
        inline app::NameOptions_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::NameOptions_c_DisplayClass19_0>(get_class());
        }
    } // namespace NameOptions_c_DisplayClass19_0
} // namespace app::classes::types
