#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom_WaitNodeReturnType__Enum.h>

namespace app::classes::types {
    namespace WaitNodeNonFixedRandom_WaitNodeReturnType__Enum {
        namespace {
            inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class** type_info = &type_info_ref;
        inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class>(type_info, "Moon.BehaviourSystem", "WaitNodeNonFixedRandom", "WaitNodeReturnType");
        }
        inline app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum* create() {
            return il2cpp::create_object<app::WaitNodeNonFixedRandom_WaitNodeReturnType__Enum>(get_class());
        }
    } // namespace WaitNodeNonFixedRandom_WaitNodeReturnType__Enum
} // namespace app::classes::types
