#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallRequestContainer__Array {
        namespace {
            inline app::CallRequestContainer__Array__Class* type_info_ref = nullptr;
        }
        inline app::CallRequestContainer__Array__Class** type_info = &type_info_ref;
        inline app::CallRequestContainer__Array__Class* get_class() {
            return il2cpp::get_class<app::CallRequestContainer__Array__Class>(type_info, "PlayFab.Internal", "CallRequestContainer[]");
        }
        inline app::CallRequestContainer__Array* create() {
            return il2cpp::create_object<app::CallRequestContainer__Array>(get_class());
        }
    } // namespace CallRequestContainer__Array
} // namespace app::classes::types
