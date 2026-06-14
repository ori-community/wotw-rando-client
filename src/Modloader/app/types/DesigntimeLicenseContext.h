#pragma once
#include <Modloader/app/structs/DesigntimeLicenseContext.h>
#include <Modloader/app/structs/DesigntimeLicenseContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesigntimeLicenseContext {
        inline app::DesigntimeLicenseContext__Class** type_info() {
            static app::DesigntimeLicenseContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesigntimeLicenseContext__Class**)(modloader::win::memory::resolve_rva(0x04754B58));
            }
            return cache;
        }
        inline app::DesigntimeLicenseContext__Class* get_class() {
            return il2cpp::get_class<app::DesigntimeLicenseContext__Class>(type_info(), "System.ComponentModel.Design", "DesigntimeLicenseContext");
        }
        inline app::DesigntimeLicenseContext* create() {
            return il2cpp::create_object<app::DesigntimeLicenseContext>(get_class());
        }
    } // namespace DesigntimeLicenseContext
} // namespace app::classes::types
