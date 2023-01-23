#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom__Class.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom.h>

namespace app::classes::types {
    namespace WaitNodeNonFixedRandom {
        namespace {
            inline app::WaitNodeNonFixedRandom__Class* type_info_ref = nullptr;
        }
        inline app::WaitNodeNonFixedRandom__Class** type_info = &type_info_ref;
        inline app::WaitNodeNonFixedRandom__Class* get_class() {
            return il2cpp::get_class<app::WaitNodeNonFixedRandom__Class>(type_info, "Moon.BehaviourSystem", "WaitNodeNonFixedRandom");
        }
        inline app::WaitNodeNonFixedRandom* create() {
            return il2cpp::create_object<app::WaitNodeNonFixedRandom>(get_class());
        }
    } // namespace WaitNodeNonFixedRandom
} // namespace app::classes::types
