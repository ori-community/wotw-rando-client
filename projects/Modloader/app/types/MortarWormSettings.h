#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarWormSettings__Class.h>
#include <Modloader/app/structs/MortarWormSettings.h>

namespace app::classes::types {
    namespace MortarWormSettings {
        namespace {
            inline app::MortarWormSettings__Class* type_info_ref = nullptr;
        }
        inline app::MortarWormSettings__Class** type_info = &type_info_ref;
        inline app::MortarWormSettings__Class* get_class() {
            return il2cpp::get_class<app::MortarWormSettings__Class>(type_info, "", "MortarWormSettings");
        }
        inline app::MortarWormSettings* create() {
            return il2cpp::create_object<app::MortarWormSettings>(get_class());
        }
    } // namespace MortarWormSettings
} // namespace app::classes::types
