#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SCurveContrast__Class.h>
#include <Modloader/app/structs/SCurveContrast.h>

namespace app::classes::types {
    namespace SCurveContrast {
        namespace {
            inline app::SCurveContrast__Class* type_info_ref = nullptr;
        }
        inline app::SCurveContrast__Class** type_info = &type_info_ref;
        inline app::SCurveContrast__Class* get_class() {
            return il2cpp::get_class<app::SCurveContrast__Class>(type_info, "Colorful", "SCurveContrast");
        }
        inline app::SCurveContrast* create() {
            return il2cpp::create_object<app::SCurveContrast>(get_class());
        }
    } // namespace SCurveContrast
} // namespace app::classes::types
