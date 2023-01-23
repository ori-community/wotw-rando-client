#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrabEntity_DamageTime__Array__Class.h>
#include <Modloader/app/structs/CrabEntity_DamageTime__Array.h>

namespace app::classes::types {
    namespace CrabEntity_DamageTime__Array {
        namespace {
            inline app::CrabEntity_DamageTime__Array__Class* type_info_ref = nullptr;
        }
        inline app::CrabEntity_DamageTime__Array__Class** type_info = &type_info_ref;
        inline app::CrabEntity_DamageTime__Array__Class* get_class() {
            return il2cpp::get_class<app::CrabEntity_DamageTime__Array__Class>(type_info, "", "CrabEntity+DamageTime[]");
        }
        inline app::CrabEntity_DamageTime__Array* create() {
            return il2cpp::create_object<app::CrabEntity_DamageTime__Array>(get_class());
        }
    } // namespace CrabEntity_DamageTime__Array
} // namespace app::classes::types
