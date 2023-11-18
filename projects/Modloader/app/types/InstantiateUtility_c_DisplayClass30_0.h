#pragma once
#include <Modloader/app/structs/InstantiateUtility_c_DisplayClass30_0.h>
#include <Modloader/app/structs/InstantiateUtility_c_DisplayClass30_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility_c_DisplayClass30_0 {
        inline app::InstantiateUtility_c_DisplayClass30_0__Class** type_info() {
            static app::InstantiateUtility_c_DisplayClass30_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiateUtility_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x04747420));
            }
            return cache;
        }
        inline app::InstantiateUtility_c_DisplayClass30_0__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_c_DisplayClass30_0__Class>(type_info(), "", "InstantiateUtility", "<>c__DisplayClass30_0");
        }
        inline app::InstantiateUtility_c_DisplayClass30_0* create() {
            return il2cpp::create_object<app::InstantiateUtility_c_DisplayClass30_0>(get_class());
        }
    } // namespace InstantiateUtility_c_DisplayClass30_0
} // namespace app::classes::types
