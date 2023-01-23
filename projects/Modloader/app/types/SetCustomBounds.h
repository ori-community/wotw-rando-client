#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetCustomBounds__Class.h>
#include <Modloader/app/structs/SetCustomBounds.h>

namespace app::classes::types {
    namespace SetCustomBounds {
        namespace {
            inline app::SetCustomBounds__Class* type_info_ref = nullptr;
        }
        inline app::SetCustomBounds__Class** type_info = &type_info_ref;
        inline app::SetCustomBounds__Class* get_class() {
            return il2cpp::get_class<app::SetCustomBounds__Class>(type_info, "", "SetCustomBounds");
        }
        inline app::SetCustomBounds* create() {
            return il2cpp::create_object<app::SetCustomBounds>(get_class());
        }
    } // namespace SetCustomBounds
} // namespace app::classes::types
