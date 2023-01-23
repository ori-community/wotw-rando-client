#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BaseInput__Array__Class.h>
#include <Modloader/app/structs/BaseInput__Array.h>

namespace app::classes::types {
    namespace BaseInput__Array {
        namespace {
            inline app::BaseInput__Array__Class* type_info_ref = nullptr;
        }
        inline app::BaseInput__Array__Class** type_info = &type_info_ref;
        inline app::BaseInput__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseInput__Array__Class>(type_info, "UnityEngine.EventSystems", "BaseInput[]");
        }
        inline app::BaseInput__Array* create() {
            return il2cpp::create_object<app::BaseInput__Array>(get_class());
        }
    } // namespace BaseInput__Array
} // namespace app::classes::types
