#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DrivenZRotation {
        namespace {
            inline app::DrivenZRotation__Class* type_info_ref = nullptr;
        }
        inline app::DrivenZRotation__Class** type_info = &type_info_ref;
        inline app::DrivenZRotation__Class* get_class() {
            return il2cpp::get_class<app::DrivenZRotation__Class>(type_info, "Moon", "DrivenZRotation");
        }
        inline app::DrivenZRotation* create() {
            return il2cpp::create_object<app::DrivenZRotation>(get_class());
        }
    } // namespace DrivenZRotation
} // namespace app::classes::types
