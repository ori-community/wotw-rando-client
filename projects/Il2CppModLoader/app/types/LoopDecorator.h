#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoopDecorator {
        namespace {
            inline app::LoopDecorator__Class* type_info_ref = nullptr;
        }
        inline app::LoopDecorator__Class** type_info = &type_info_ref;
        inline app::LoopDecorator__Class* get_class() {
            return il2cpp::get_class<app::LoopDecorator__Class>(type_info, "Moon.BehaviourSystem", "LoopDecorator");
        }
        inline app::LoopDecorator* create() {
            return il2cpp::create_object<app::LoopDecorator>(get_class());
        }
    } // namespace LoopDecorator
} // namespace app::classes::types
