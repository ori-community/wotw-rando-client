#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Array__Class.h>
#include <Modloader/app/structs/AbilitiesPlugin_FieldInfoCollection__Array.h>

namespace app::classes::types {
    namespace AbilitiesPlugin_FieldInfoCollection__Array {
        namespace {
            inline app::AbilitiesPlugin_FieldInfoCollection__Array__Class* type_info_ref = nullptr;
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array__Class** type_info = &type_info_ref;
        inline app::AbilitiesPlugin_FieldInfoCollection__Array__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesPlugin_FieldInfoCollection__Array__Class>(type_info, "", "AbilitiesPlugin+FieldInfoCollection[]");
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array* create() {
            return il2cpp::create_object<app::AbilitiesPlugin_FieldInfoCollection__Array>(get_class());
        }
    } // namespace AbilitiesPlugin_FieldInfoCollection__Array
} // namespace app::classes::types
