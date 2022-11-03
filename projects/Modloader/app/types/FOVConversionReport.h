#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FOVConversionReport {
        namespace {
            inline app::FOVConversionReport__Class* type_info_ref = nullptr;
        }
        inline app::FOVConversionReport__Class** type_info = &type_info_ref;
        inline app::FOVConversionReport__Class* get_class() {
            return il2cpp::get_class<app::FOVConversionReport__Class>(type_info, "Moon.EditorTools", "FOVConversionReport");
        }
        inline app::FOVConversionReport* create() {
            return il2cpp::create_object<app::FOVConversionReport>(get_class());
        }
    } // namespace FOVConversionReport
} // namespace app::classes::types
