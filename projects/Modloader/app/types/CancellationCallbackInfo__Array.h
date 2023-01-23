#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CancellationCallbackInfo__Array__Class.h>
#include <Modloader/app/structs/CancellationCallbackInfo__Array.h>

namespace app::classes::types {
    namespace CancellationCallbackInfo__Array {
        namespace {
            inline app::CancellationCallbackInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::CancellationCallbackInfo__Array__Class** type_info = &type_info_ref;
        inline app::CancellationCallbackInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationCallbackInfo__Array__Class>(type_info, "System.Threading", "CancellationCallbackInfo[]");
        }
        inline app::CancellationCallbackInfo__Array* create() {
            return il2cpp::create_object<app::CancellationCallbackInfo__Array>(get_class());
        }
    } // namespace CancellationCallbackInfo__Array
} // namespace app::classes::types
