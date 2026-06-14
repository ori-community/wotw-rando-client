#pragma once
#include <Modloader/app/structs/WaitNodeNonFixedRandom_WaitNodeReturnType__Enum.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitNodeNonFixedRandom_WaitNodeReturnType__Enum {
        inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class** type_info() {
            static app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class>(type_info(), "Moon.BehaviourSystem", "WaitNodeNonFixedRandom", "WaitNodeReturnType");
        }
        inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum* create() {
            return il2cpp::create_object<app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum>(get_class());
        }
    } // namespace WaitNodeNonFixedRandom_WaitNodeReturnType__Enum
} // namespace app::classes::types
