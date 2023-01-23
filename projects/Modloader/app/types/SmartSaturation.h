#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SmartSaturation__Class.h>
#include <Modloader/app/structs/SmartSaturation.h>

namespace app::classes::types {
    namespace SmartSaturation {
        namespace {
            inline app::SmartSaturation__Class* type_info_ref = nullptr;
        }
        inline app::SmartSaturation__Class** type_info = &type_info_ref;
        inline app::SmartSaturation__Class* get_class() {
            return il2cpp::get_class<app::SmartSaturation__Class>(type_info, "Colorful", "SmartSaturation");
        }
        inline app::SmartSaturation* create() {
            return il2cpp::create_object<app::SmartSaturation>(get_class());
        }
    } // namespace SmartSaturation
} // namespace app::classes::types
