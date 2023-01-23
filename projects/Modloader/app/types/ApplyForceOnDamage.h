#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplyForceOnDamage__Class.h>
#include <Modloader/app/structs/ApplyForceOnDamage.h>

namespace app::classes::types {
    namespace ApplyForceOnDamage {
        namespace {
            inline app::ApplyForceOnDamage__Class* type_info_ref = nullptr;
        }
        inline app::ApplyForceOnDamage__Class** type_info = &type_info_ref;
        inline app::ApplyForceOnDamage__Class* get_class() {
            return il2cpp::get_class<app::ApplyForceOnDamage__Class>(type_info, "", "ApplyForceOnDamage");
        }
        inline app::ApplyForceOnDamage* create() {
            return il2cpp::create_object<app::ApplyForceOnDamage>(get_class());
        }
    } // namespace ApplyForceOnDamage
} // namespace app::classes::types
