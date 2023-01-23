#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BoidSettings__Class.h>
#include <Modloader/app/structs/BoidSettings.h>

namespace app::classes::types {
    namespace BoidSettings {
        namespace {
            inline app::BoidSettings__Class* type_info_ref = nullptr;
        }
        inline app::BoidSettings__Class** type_info = &type_info_ref;
        inline app::BoidSettings__Class* get_class() {
            return il2cpp::get_class<app::BoidSettings__Class>(type_info, "", "BoidSettings");
        }
        inline app::BoidSettings* create() {
            return il2cpp::create_object<app::BoidSettings>(get_class());
        }
    } // namespace BoidSettings
} // namespace app::classes::types
