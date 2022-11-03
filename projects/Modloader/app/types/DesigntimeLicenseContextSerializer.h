#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesigntimeLicenseContextSerializer {
        namespace {
            inline app::DesigntimeLicenseContextSerializer__Class* type_info_ref = nullptr;
        }
        inline app::DesigntimeLicenseContextSerializer__Class** type_info = &type_info_ref;
        inline app::DesigntimeLicenseContextSerializer__Class* get_class() {
            return il2cpp::get_class<app::DesigntimeLicenseContextSerializer__Class>(type_info, "System.ComponentModel.Design", "DesigntimeLicenseContextSerializer");
        }
        inline app::DesigntimeLicenseContextSerializer* create() {
            return il2cpp::create_object<app::DesigntimeLicenseContextSerializer>(get_class());
        }
    } // namespace DesigntimeLicenseContextSerializer
} // namespace app::classes::types
