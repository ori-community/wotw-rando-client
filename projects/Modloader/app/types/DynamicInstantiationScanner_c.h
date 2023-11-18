#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_c.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_c {
        inline app::DynamicInstantiationScanner_c__Class** type_info() {
            static app::DynamicInstantiationScanner_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner_c__Class**)(modloader::win::memory::resolve_rva(0x0476DDA0));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_c__Class>(type_info(), "", "DynamicInstantiationScanner", "<>c");
        }
        inline app::DynamicInstantiationScanner_c* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_c>(get_class());
        }
    } // namespace DynamicInstantiationScanner_c
} // namespace app::classes::types
