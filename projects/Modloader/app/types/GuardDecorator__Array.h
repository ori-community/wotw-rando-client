#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GuardDecorator__Array__Class.h>
#include <Modloader/app/structs/GuardDecorator__Array.h>

namespace app::classes::types {
    namespace GuardDecorator__Array {
        namespace {
            inline app::GuardDecorator__Array__Class* type_info_ref = nullptr;
        }
        inline app::GuardDecorator__Array__Class** type_info = &type_info_ref;
        inline app::GuardDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::GuardDecorator__Array__Class>(type_info, "Moon.BehaviourSystem", "GuardDecorator[]");
        }
        inline app::GuardDecorator__Array* create() {
            return il2cpp::create_object<app::GuardDecorator__Array>(get_class());
        }
    } // namespace GuardDecorator__Array
} // namespace app::classes::types
