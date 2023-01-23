#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ModifierSpec__Array__Class.h>
#include <Modloader/app/structs/ModifierSpec__Array.h>

namespace app::classes::types {
    namespace ModifierSpec__Array {
        namespace {
            inline app::ModifierSpec__Array__Class* type_info_ref = nullptr;
        }
        inline app::ModifierSpec__Array__Class** type_info = &type_info_ref;
        inline app::ModifierSpec__Array__Class* get_class() {
            return il2cpp::get_class<app::ModifierSpec__Array__Class>(type_info, "System", "ModifierSpec[]");
        }
        inline app::ModifierSpec__Array* create() {
            return il2cpp::create_object<app::ModifierSpec__Array>(get_class());
        }
    } // namespace ModifierSpec__Array
} // namespace app::classes::types
