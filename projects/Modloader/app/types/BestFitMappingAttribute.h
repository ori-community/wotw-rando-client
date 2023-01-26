#pragma once
#include <Modloader/app/structs/BestFitMappingAttribute.h>
#include <Modloader/app/structs/BestFitMappingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BestFitMappingAttribute {
        inline app::BestFitMappingAttribute__Class** type_info() {
            static app::BestFitMappingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BestFitMappingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BestFitMappingAttribute__Class* get_class() {
            return il2cpp::get_class<app::BestFitMappingAttribute__Class>(type_info(), "System.Runtime.InteropServices", "BestFitMappingAttribute");
        }
        inline app::BestFitMappingAttribute* create() {
            return il2cpp::create_object<app::BestFitMappingAttribute>(get_class());
        }
    } // namespace BestFitMappingAttribute
} // namespace app::classes::types
