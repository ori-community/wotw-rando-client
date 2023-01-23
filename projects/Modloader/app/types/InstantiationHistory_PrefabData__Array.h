#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Array__Class.h>
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Array.h>

namespace app::classes::types {
    namespace InstantiationHistory_PrefabData__Array {
        namespace {
            inline app::InstantiationHistory_PrefabData__Array__Class* type_info_ref = nullptr;
        }
        inline app::InstantiationHistory_PrefabData__Array__Class** type_info = &type_info_ref;
        inline app::InstantiationHistory_PrefabData__Array__Class* get_class() {
            return il2cpp::get_class<app::InstantiationHistory_PrefabData__Array__Class>(type_info, "", "InstantiationHistory+PrefabData[]");
        }
        inline app::InstantiationHistory_PrefabData__Array* create() {
            return il2cpp::create_object<app::InstantiationHistory_PrefabData__Array>(get_class());
        }
    } // namespace InstantiationHistory_PrefabData__Array
} // namespace app::classes::types
