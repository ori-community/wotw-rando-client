#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoIOError__Enum {
        inline app::MonoIOError__Enum__Class** type_info = (app::MonoIOError__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474B348));
        inline app::MonoIOError__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonoIOError__Enum__Class>(type_info, "System.IO", "MonoIOError");
        }
        inline app::MonoIOError__Enum* create() {
            return il2cpp::create_object<app::MonoIOError__Enum>(get_class());
        }
    } // namespace MonoIOError__Enum
} // namespace app::classes::types
