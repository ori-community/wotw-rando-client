#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetData__Class.h>
#include <Modloader/app/structs/UberPresetData.h>

namespace app::classes::types {
    namespace UberPresetData {
        namespace {
            inline app::UberPresetData__Class* type_info_ref = nullptr;
        }
        inline app::UberPresetData__Class** type_info = &type_info_ref;
        inline app::UberPresetData__Class* get_class() {
            return il2cpp::get_class<app::UberPresetData__Class>(type_info, "", "UberPresetData");
        }
        inline app::UberPresetData* create() {
            return il2cpp::create_object<app::UberPresetData>(get_class());
        }
    } // namespace UberPresetData
} // namespace app::classes::types
