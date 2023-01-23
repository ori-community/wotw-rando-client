#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasPurchasedGardenerProjectCondition__Class.h>
#include <Modloader/app/structs/HasPurchasedGardenerProjectCondition.h>

namespace app::classes::types {
    namespace HasPurchasedGardenerProjectCondition {
        namespace {
            inline app::HasPurchasedGardenerProjectCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasPurchasedGardenerProjectCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedGardenerProjectCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedGardenerProjectCondition__Class>(type_info, "", "HasPurchasedGardenerProjectCondition");
        }
        inline app::HasPurchasedGardenerProjectCondition* create() {
            return il2cpp::create_object<app::HasPurchasedGardenerProjectCondition>(get_class());
        }
    } // namespace HasPurchasedGardenerProjectCondition
} // namespace app::classes::types
