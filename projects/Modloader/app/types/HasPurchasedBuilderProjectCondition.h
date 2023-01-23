#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasPurchasedBuilderProjectCondition__Class.h>
#include <Modloader/app/structs/HasPurchasedBuilderProjectCondition.h>

namespace app::classes::types {
    namespace HasPurchasedBuilderProjectCondition {
        namespace {
            inline app::HasPurchasedBuilderProjectCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasPurchasedBuilderProjectCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedBuilderProjectCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedBuilderProjectCondition__Class>(type_info, "", "HasPurchasedBuilderProjectCondition");
        }
        inline app::HasPurchasedBuilderProjectCondition* create() {
            return il2cpp::create_object<app::HasPurchasedBuilderProjectCondition>(get_class());
        }
    } // namespace HasPurchasedBuilderProjectCondition
} // namespace app::classes::types
