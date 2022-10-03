#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancellationCallbackCoreWorkArguments {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancellationCallbackCoreWorkArguments__Class** type_info;
        inline app::CancellationCallbackCoreWorkArguments__Class* get_class() {
            return il2cpp::get_class<app::CancellationCallbackCoreWorkArguments__Class>(type_info, "System.Threading", "CancellationCallbackCoreWorkArguments");
        }
        inline app::CancellationCallbackCoreWorkArguments* create() {
            return il2cpp::create_object<app::CancellationCallbackCoreWorkArguments>(get_class());
        }
        inline app::CancellationCallbackCoreWorkArguments__Boxed* box(app::CancellationCallbackCoreWorkArguments value) {
            return il2cpp::box_value<app::CancellationCallbackCoreWorkArguments__Boxed>(get_class(), value);
        }
    } // namespace CancellationCallbackCoreWorkArguments
} // namespace app::classes::types
