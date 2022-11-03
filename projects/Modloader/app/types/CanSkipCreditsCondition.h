#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanSkipCreditsCondition {
        namespace {
            inline app::CanSkipCreditsCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanSkipCreditsCondition__Class** type_info = &type_info_ref;
        inline app::CanSkipCreditsCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipCreditsCondition__Class>(type_info, "", "CanSkipCreditsCondition");
        }
        inline app::CanSkipCreditsCondition* create() {
            return il2cpp::create_object<app::CanSkipCreditsCondition>(get_class());
        }
    } // namespace CanSkipCreditsCondition
} // namespace app::classes::types
