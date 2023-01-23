#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageOwner__Array__Class.h>
#include <Modloader/app/structs/DamageOwner__Array.h>

namespace app::classes::types {
    namespace DamageOwner__Array {
        namespace {
            inline app::DamageOwner__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageOwner__Array__Class** type_info = &type_info_ref;
        inline app::DamageOwner__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageOwner__Array__Class>(type_info, "Moon", "DamageOwner[]");
        }
        inline app::DamageOwner__Array* create() {
            return il2cpp::create_object<app::DamageOwner__Array>(get_class());
        }
    } // namespace DamageOwner__Array
} // namespace app::classes::types
