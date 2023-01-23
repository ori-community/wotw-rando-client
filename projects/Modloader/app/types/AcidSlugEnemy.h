#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AcidSlugEnemy__Class.h>
#include <Modloader/app/structs/AcidSlugEnemy.h>

namespace app::classes::types {
    namespace AcidSlugEnemy {
        namespace {
            inline app::AcidSlugEnemy__Class* type_info_ref = nullptr;
        }
        inline app::AcidSlugEnemy__Class** type_info = &type_info_ref;
        inline app::AcidSlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugEnemy__Class>(type_info, "", "AcidSlugEnemy");
        }
        inline app::AcidSlugEnemy* create() {
            return il2cpp::create_object<app::AcidSlugEnemy>(get_class());
        }
    } // namespace AcidSlugEnemy
} // namespace app::classes::types
