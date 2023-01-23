#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class.h>
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31.h>
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed.h>

namespace app::classes::types {
    namespace SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 {
        namespace {
            inline app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class* type_info_ref = nullptr;
        }
        inline app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class** type_info = &type_info_ref;
        inline app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class* get_class() {
            return il2cpp::get_nested_class<app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class>(type_info, "System.Threading", "SemaphoreSlim", "<WaitUntilCountOrTimeoutAsync>d__31");
        }
        inline app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31* create() {
            return il2cpp::create_object<app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31>(get_class());
        }
        inline app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed* box(app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 value) {
            return il2cpp::box_value<app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed>(get_class(), value);
        }
    } // namespace SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31
} // namespace app::classes::types
