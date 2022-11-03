#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageResultType__Enum {
        namespace {
            inline app::DamageResultType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageResultType__Enum__Class** type_info = &type_info_ref;
        inline app::DamageResultType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageResultType__Enum__Class>(type_info, "", "DamageResultType");
        }
        inline app::DamageResultType__Enum* create() {
            return il2cpp::create_object<app::DamageResultType__Enum>(get_class());
        }
    } // namespace DamageResultType__Enum
} // namespace app::classes::types
