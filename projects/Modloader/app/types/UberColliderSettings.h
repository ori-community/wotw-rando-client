#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberColliderSettings__Class.h>
#include <Modloader/app/structs/UberColliderSettings.h>

namespace app::classes::types {
    namespace UberColliderSettings {
        namespace {
            inline app::UberColliderSettings__Class* type_info_ref = nullptr;
        }
        inline app::UberColliderSettings__Class** type_info = &type_info_ref;
        inline app::UberColliderSettings__Class* get_class() {
            return il2cpp::get_class<app::UberColliderSettings__Class>(type_info, "", "UberColliderSettings");
        }
        inline app::UberColliderSettings* create() {
            return il2cpp::create_object<app::UberColliderSettings>(get_class());
        }
    } // namespace UberColliderSettings
} // namespace app::classes::types
