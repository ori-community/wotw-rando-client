#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetMetaManager__Class.h>
#include <Modloader/app/structs/UberPresetMetaManager.h>

namespace app::classes::types {
    namespace UberPresetMetaManager {
        namespace {
            inline app::UberPresetMetaManager__Class* type_info_ref = nullptr;
        }
        inline app::UberPresetMetaManager__Class** type_info = &type_info_ref;
        inline app::UberPresetMetaManager__Class* get_class() {
            return il2cpp::get_class<app::UberPresetMetaManager__Class>(type_info, "", "UberPresetMetaManager");
        }
        inline app::UberPresetMetaManager* create() {
            return il2cpp::create_object<app::UberPresetMetaManager>(get_class());
        }
    } // namespace UberPresetMetaManager
} // namespace app::classes::types
