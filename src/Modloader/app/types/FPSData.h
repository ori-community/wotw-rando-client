#pragma once
#include <Modloader/app/structs/FPSData.h>
#include <Modloader/app/structs/FPSData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSData {
        inline app::FPSData__Class** type_info() {
            static app::FPSData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSData__Class* get_class() {
            return il2cpp::get_class<app::FPSData__Class>(type_info(), "", "FPSData");
        }
        inline app::FPSData* create() {
            return il2cpp::create_object<app::FPSData>(get_class());
        }
    } // namespace FPSData
} // namespace app::classes::types
