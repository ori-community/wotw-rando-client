#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardSpawnType__Enum__Class.h>
#include <Modloader/app/structs/LizardSpawnType__Enum.h>

namespace app::classes::types {
    namespace LizardSpawnType__Enum {
        namespace {
            inline app::LizardSpawnType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LizardSpawnType__Enum__Class** type_info = &type_info_ref;
        inline app::LizardSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnType__Enum__Class>(type_info, "", "LizardSpawnType");
        }
        inline app::LizardSpawnType__Enum* create() {
            return il2cpp::create_object<app::LizardSpawnType__Enum>(get_class());
        }
    } // namespace LizardSpawnType__Enum
} // namespace app::classes::types
