#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncRenderCapture__Array__Class.h>
#include <Modloader/app/structs/AsyncRenderCapture__Array.h>

namespace app::classes::types {
    namespace AsyncRenderCapture__Array {
        namespace {
            inline app::AsyncRenderCapture__Array__Class* type_info_ref = nullptr;
        }
        inline app::AsyncRenderCapture__Array__Class** type_info = &type_info_ref;
        inline app::AsyncRenderCapture__Array__Class* get_class() {
            return il2cpp::get_class<app::AsyncRenderCapture__Array__Class>(type_info, "", "AsyncRenderCapture[]");
        }
        inline app::AsyncRenderCapture__Array* create() {
            return il2cpp::create_object<app::AsyncRenderCapture__Array>(get_class());
        }
    } // namespace AsyncRenderCapture__Array
} // namespace app::classes::types
