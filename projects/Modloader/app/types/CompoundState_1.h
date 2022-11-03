#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompoundState_1 {
        namespace {
            inline app::CompoundState_1__Class* type_info_ref = nullptr;
        }
        inline app::CompoundState_1__Class** type_info = &type_info_ref;
        inline app::CompoundState_1__Class* get_class() {
            return il2cpp::get_class<app::CompoundState_1__Class>(type_info, "fsm", "CompoundState");
        }
        inline app::CompoundState_1* create() {
            return il2cpp::create_object<app::CompoundState_1>(get_class());
        }
    } // namespace CompoundState_1
} // namespace app::classes::types
