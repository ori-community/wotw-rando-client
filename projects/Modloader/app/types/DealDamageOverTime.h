#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DealDamageOverTime__Class.h>
#include <Modloader/app/structs/DealDamageOverTime.h>

namespace app::classes::types {
    namespace DealDamageOverTime {
        namespace {
            inline app::DealDamageOverTime__Class* type_info_ref = nullptr;
        }
        inline app::DealDamageOverTime__Class** type_info = &type_info_ref;
        inline app::DealDamageOverTime__Class* get_class() {
            return il2cpp::get_class<app::DealDamageOverTime__Class>(type_info, "", "DealDamageOverTime");
        }
        inline app::DealDamageOverTime* create() {
            return il2cpp::create_object<app::DealDamageOverTime>(get_class());
        }
    } // namespace DealDamageOverTime
} // namespace app::classes::types
