#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Array__Class.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Array.h>

namespace app::classes::types {
    namespace DamageReceiver_OverrideInfo__Array {
        namespace {
            inline app::DamageReceiver_OverrideInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiver_OverrideInfo__Array__Class** type_info = &type_info_ref;
        inline app::DamageReceiver_OverrideInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver_OverrideInfo__Array__Class>(type_info, "Moon", "DamageReceiver+OverrideInfo[]");
        }
        inline app::DamageReceiver_OverrideInfo__Array* create() {
            return il2cpp::create_object<app::DamageReceiver_OverrideInfo__Array>(get_class());
        }
    } // namespace DamageReceiver_OverrideInfo__Array
} // namespace app::classes::types
