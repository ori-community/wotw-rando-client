#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseInputModule__Array {
        namespace {
            inline app::BaseInputModule__Array__Class* type_info_ref = nullptr;
        }
        inline app::BaseInputModule__Array__Class** type_info = &type_info_ref;
        inline app::BaseInputModule__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseInputModule__Array__Class>(type_info, "UnityEngine.EventSystems", "BaseInputModule[]");
        }
        inline app::BaseInputModule__Array* create() {
            return il2cpp::create_object<app::BaseInputModule__Array>(get_class());
        }
    } // namespace BaseInputModule__Array
} // namespace app::classes::types
