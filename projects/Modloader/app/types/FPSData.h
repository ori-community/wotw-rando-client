#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSData__Class.h>
#include <Modloader/app/structs/FPSData.h>

namespace app::classes::types {
    namespace FPSData {
        namespace {
            inline app::FPSData__Class* type_info_ref = nullptr;
        }
        inline app::FPSData__Class** type_info = &type_info_ref;
        inline app::FPSData__Class* get_class() {
            return il2cpp::get_class<app::FPSData__Class>(type_info, "", "FPSData");
        }
        inline app::FPSData* create() {
            return il2cpp::create_object<app::FPSData>(get_class());
        }
    } // namespace FPSData
} // namespace app::classes::types
