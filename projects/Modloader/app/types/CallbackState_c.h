#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CallbackState_c__Class.h>
#include <Modloader/app/structs/CallbackState_c.h>

namespace app::classes::types {
    namespace CallbackState_c {
        inline app::CallbackState_c__Class** type_info = (app::CallbackState_c__Class**)(modloader::win::memory::resolve_rva(0x0471EA20));
        inline app::CallbackState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CallbackState_c__Class>(type_info, "Moon.InteractionGraph", "CallbackState", "<>c");
        }
        inline app::CallbackState_c* create() {
            return il2cpp::create_object<app::CallbackState_c>(get_class());
        }
    } // namespace CallbackState_c
} // namespace app::classes::types
