#pragma once
#include <Modloader/app/structs/MonoIOError__Enum.h>
#include <Modloader/app/structs/MonoIOError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoIOError__Enum {
        inline app::MonoIOError__Enum__Class** type_info() {
            static app::MonoIOError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoIOError__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474B348));
            }
            return cache;
        }
        inline app::MonoIOError__Enum__Class* get_class() {
            return il2cpp::get_class<app::MonoIOError__Enum__Class>(type_info(), "System.IO", "MonoIOError");
        }
        inline app::MonoIOError__Enum* create() {
            return il2cpp::create_object<app::MonoIOError__Enum>(get_class());
        }
    } // namespace MonoIOError__Enum
} // namespace app::classes::types
