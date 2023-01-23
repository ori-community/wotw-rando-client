#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CallbackState__Class.h>
#include <Modloader/app/structs/CallbackState.h>

namespace app::classes::types {
    namespace CallbackState {
        namespace {
            inline app::CallbackState__Class* type_info_ref = nullptr;
        }
        inline app::CallbackState__Class** type_info = &type_info_ref;
        inline app::CallbackState__Class* get_class() {
            return il2cpp::get_class<app::CallbackState__Class>(type_info, "Moon.InteractionGraph", "CallbackState");
        }
        inline app::CallbackState* create() {
            return il2cpp::create_object<app::CallbackState>(get_class());
        }
    } // namespace CallbackState
} // namespace app::classes::types
