#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#include <Modloader/app/structs/DynamicInstantiationScanner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner {
        inline app::DynamicInstantiationScanner__Class** type_info() {
            static app::DynamicInstantiationScanner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner__Class**)(modloader::win::memory::resolve_rva(0x04767C78));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationScanner__Class>(type_info(), "", "DynamicInstantiationScanner");
        }
        inline app::DynamicInstantiationScanner* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner>(get_class());
        }
    } // namespace DynamicInstantiationScanner
} // namespace app::classes::types
