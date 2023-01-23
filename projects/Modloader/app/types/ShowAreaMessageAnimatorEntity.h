#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity__Class.h>
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity.h>

namespace app::classes::types {
    namespace ShowAreaMessageAnimatorEntity {
        namespace {
            inline app::ShowAreaMessageAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShowAreaMessageAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ShowAreaMessageAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowAreaMessageAnimatorEntity__Class>(type_info, "", "ShowAreaMessageAnimatorEntity");
        }
        inline app::ShowAreaMessageAnimatorEntity* create() {
            return il2cpp::create_object<app::ShowAreaMessageAnimatorEntity>(get_class());
        }
    } // namespace ShowAreaMessageAnimatorEntity
} // namespace app::classes::types
