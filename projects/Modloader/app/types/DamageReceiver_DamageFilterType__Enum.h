#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageReceiver_DamageFilterType__Enum__Class.h>
#include <Modloader/app/structs/DamageReceiver_DamageFilterType__Enum.h>

namespace app::classes::types {
    namespace DamageReceiver_DamageFilterType__Enum {
        namespace {
            inline app::DamageReceiver_DamageFilterType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiver_DamageFilterType__Enum__Class** type_info = &type_info_ref;
        inline app::DamageReceiver_DamageFilterType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_DamageFilterType__Enum__Class>(type_info, "Moon", "DamageReceiver", "DamageFilterType");
        }
        inline app::DamageReceiver_DamageFilterType__Enum* create() {
            return il2cpp::create_object<app::DamageReceiver_DamageFilterType__Enum>(get_class());
        }
    } // namespace DamageReceiver_DamageFilterType__Enum
} // namespace app::classes::types
