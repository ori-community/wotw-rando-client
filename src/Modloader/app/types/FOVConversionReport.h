#pragma once
#include <Modloader/app/structs/FOVConversionReport.h>
#include <Modloader/app/structs/FOVConversionReport__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FOVConversionReport {
        inline app::FOVConversionReport__Class** type_info() {
            static app::FOVConversionReport__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FOVConversionReport__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FOVConversionReport__Class* get_class() {
            return il2cpp::get_class<app::FOVConversionReport__Class>(type_info(), "Moon.EditorTools", "FOVConversionReport");
        }
        inline app::FOVConversionReport* create() {
            return il2cpp::create_object<app::FOVConversionReport>(get_class());
        }
    } // namespace FOVConversionReport
} // namespace app::classes::types
