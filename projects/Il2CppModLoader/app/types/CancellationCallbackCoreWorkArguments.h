#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancellationCallbackCoreWorkArguments {
        inline app::CancellationCallbackCoreWorkArguments__Class** type_info = (app::CancellationCallbackCoreWorkArguments__Class**)(modloader::win::memory::resolve_rva(0x0473A5A8));
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
