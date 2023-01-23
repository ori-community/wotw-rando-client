#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Array__Class.h>
#include <Modloader/app/structs/DamageTypePrefabPair__Array.h>

namespace app::classes::types {
    namespace DamageTypePrefabPair__Array {
        namespace {
            inline app::DamageTypePrefabPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageTypePrefabPair__Array__Class** type_info = &type_info_ref;
        inline app::DamageTypePrefabPair__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageTypePrefabPair__Array__Class>(type_info, "", "DamageTypePrefabPair[]");
        }
        inline app::DamageTypePrefabPair__Array* create() {
            return il2cpp::create_object<app::DamageTypePrefabPair__Array>(get_class());
        }
    } // namespace DamageTypePrefabPair__Array
} // namespace app::classes::types
