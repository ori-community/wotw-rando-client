#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TreeData {
        namespace {
            inline app::TreeData__Class* type_info_ref = nullptr;
        }
        inline app::TreeData__Class** type_info = &type_info_ref;
        inline app::TreeData__Class* get_class() {
            return il2cpp::get_class<app::TreeData__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "TreeData");
        }
        inline app::TreeData* create() {
            return il2cpp::create_object<app::TreeData>(get_class());
        }
    } // namespace TreeData
} // namespace app::classes::types
