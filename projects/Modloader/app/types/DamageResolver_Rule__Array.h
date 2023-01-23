#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageResolver_Rule__Array__Class.h>
#include <Modloader/app/structs/DamageResolver_Rule__Array.h>

namespace app::classes::types {
    namespace DamageResolver_Rule__Array {
        namespace {
            inline app::DamageResolver_Rule__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageResolver_Rule__Array__Class** type_info = &type_info_ref;
        inline app::DamageResolver_Rule__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageResolver_Rule__Array__Class>(type_info, "Moon", "DamageResolver+Rule[]");
        }
        inline app::DamageResolver_Rule__Array* create() {
            return il2cpp::create_object<app::DamageResolver_Rule__Array>(get_class());
        }
    } // namespace DamageResolver_Rule__Array
} // namespace app::classes::types
