#pragma once
#include <Modloader/app/structs/UberSwarmPOI_POIType__Enum.h>
#include <Modloader/app/structs/UberSwarmPOI_POIType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOI_POIType__Enum {
        inline app::UberSwarmPOI_POIType__Enum__Class** type_info() {
            static app::UberSwarmPOI_POIType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarmPOI_POIType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarmPOI_POIType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberSwarmPOI_POIType__Enum__Class>(type_info(), "", "UberSwarmPOI", "POIType");
        }
        inline app::UberSwarmPOI_POIType__Enum* create() {
            return il2cpp::create_object<app::UberSwarmPOI_POIType__Enum>(get_class());
        }
    } // namespace UberSwarmPOI_POIType__Enum
} // namespace app::classes::types
