#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IState_1__Array {
        namespace {
            inline app::IState_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::IState_1__Array__Class** type_info = &type_info_ref;
        inline app::IState_1__Array__Class* get_class() {
            return il2cpp::get_class<app::IState_1__Array__Class>(type_info, "Moon.InteractionGraph", "IState[]");
        }
        inline app::IState_1__Array* create() {
            return il2cpp::create_object<app::IState_1__Array>(get_class());
        }
    } // namespace IState_1__Array
} // namespace app::classes::types
