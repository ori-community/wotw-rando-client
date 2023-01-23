#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsHDRToggleActive__Class.h>
#include <Modloader/app/structs/IsHDRToggleActive.h>

namespace app::classes::types {
    namespace IsHDRToggleActive {
        namespace {
            inline app::IsHDRToggleActive__Class* type_info_ref = nullptr;
        }
        inline app::IsHDRToggleActive__Class** type_info = &type_info_ref;
        inline app::IsHDRToggleActive__Class* get_class() {
            return il2cpp::get_class<app::IsHDRToggleActive__Class>(type_info, "", "IsHDRToggleActive");
        }
        inline app::IsHDRToggleActive* create() {
            return il2cpp::create_object<app::IsHDRToggleActive>(get_class());
        }
    } // namespace IsHDRToggleActive
} // namespace app::classes::types
