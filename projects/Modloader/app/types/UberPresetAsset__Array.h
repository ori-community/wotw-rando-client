#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetAsset__Array__Class.h>
#include <Modloader/app/structs/UberPresetAsset__Array.h>

namespace app::classes::types {
    namespace UberPresetAsset__Array {
        namespace {
            inline app::UberPresetAsset__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberPresetAsset__Array__Class** type_info = &type_info_ref;
        inline app::UberPresetAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPresetAsset__Array__Class>(type_info, "", "UberPresetAsset[]");
        }
        inline app::UberPresetAsset__Array* create() {
            return il2cpp::create_object<app::UberPresetAsset__Array>(get_class());
        }
    } // namespace UberPresetAsset__Array
} // namespace app::classes::types
