#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsSelectedSlotEmptyCondition {
        namespace {
            inline app::IsSelectedSlotEmptyCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsSelectedSlotEmptyCondition__Class** type_info = &type_info_ref;
        inline app::IsSelectedSlotEmptyCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSelectedSlotEmptyCondition__Class>(type_info, "", "IsSelectedSlotEmptyCondition");
        }
        inline app::IsSelectedSlotEmptyCondition* create() {
            return il2cpp::create_object<app::IsSelectedSlotEmptyCondition>(get_class());
        }
    } // namespace IsSelectedSlotEmptyCondition
} // namespace app::classes::types
