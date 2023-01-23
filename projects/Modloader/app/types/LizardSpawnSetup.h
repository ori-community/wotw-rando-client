#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardSpawnSetup__Class.h>
#include <Modloader/app/structs/LizardSpawnSetup.h>

namespace app::classes::types {
    namespace LizardSpawnSetup {
        namespace {
            inline app::LizardSpawnSetup__Class* type_info_ref = nullptr;
        }
        inline app::LizardSpawnSetup__Class** type_info = &type_info_ref;
        inline app::LizardSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnSetup__Class>(type_info, "", "LizardSpawnSetup");
        }
        inline app::LizardSpawnSetup* create() {
            return il2cpp::create_object<app::LizardSpawnSetup>(get_class());
        }
    } // namespace LizardSpawnSetup
} // namespace app::classes::types
