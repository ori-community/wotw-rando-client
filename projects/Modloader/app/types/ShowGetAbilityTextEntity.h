#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowGetAbilityTextEntity__Class.h>
#include <Modloader/app/structs/ShowGetAbilityTextEntity.h>

namespace app::classes::types {
    namespace ShowGetAbilityTextEntity {
        namespace {
            inline app::ShowGetAbilityTextEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShowGetAbilityTextEntity__Class** type_info = &type_info_ref;
        inline app::ShowGetAbilityTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowGetAbilityTextEntity__Class>(type_info, "Moon.Timeline", "ShowGetAbilityTextEntity");
        }
        inline app::ShowGetAbilityTextEntity* create() {
            return il2cpp::create_object<app::ShowGetAbilityTextEntity>(get_class());
        }
    } // namespace ShowGetAbilityTextEntity
} // namespace app::classes::types
