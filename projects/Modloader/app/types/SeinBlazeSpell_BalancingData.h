#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData__Class.h>
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BalancingData {
        namespace {
            inline app::SeinBlazeSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinBlazeSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinBlazeSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell_BalancingData__Class>(type_info, "", "SeinBlazeSpell_BalancingData");
        }
        inline app::SeinBlazeSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BalancingData>(get_class());
        }
    } // namespace SeinBlazeSpell_BalancingData
} // namespace app::classes::types
