#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramSettings__Class.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramSettings.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData_ChakramSettings {
        namespace {
            inline app::SeinChakramSpell_BalancingData_ChakramSettings__Class* type_info_ref = nullptr;
        }
        inline app::SeinChakramSpell_BalancingData_ChakramSettings__Class** type_info = &type_info_ref;
        inline app::SeinChakramSpell_BalancingData_ChakramSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChakramSpell_BalancingData_ChakramSettings__Class>(type_info, "", "SeinChakramSpell_BalancingData", "ChakramSettings");
        }
        inline app::SeinChakramSpell_BalancingData_ChakramSettings* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData_ChakramSettings>(get_class());
        }
    } // namespace SeinChakramSpell_BalancingData_ChakramSettings
} // namespace app::classes::types
