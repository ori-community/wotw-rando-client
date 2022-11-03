#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrivenPosition {
        namespace {
            inline app::DrivenPosition__Class* type_info_ref = nullptr;
        }
        inline app::DrivenPosition__Class** type_info = &type_info_ref;
        inline app::DrivenPosition__Class* get_class() {
            return il2cpp::get_class<app::DrivenPosition__Class>(type_info, "Moon", "DrivenPosition");
        }
        inline app::DrivenPosition* create() {
            return il2cpp::create_object<app::DrivenPosition>(get_class());
        }
    } // namespace DrivenPosition
} // namespace app::classes::types
