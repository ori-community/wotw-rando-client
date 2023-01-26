#pragma once
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/Header__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Header__Array {
        inline app::Header__Array__Class** type_info() {
            static app::Header__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Header__Array__Class**)(modloader::win::memory::resolve_rva(0x04714518));
            }
            return cache;
        }
        inline app::Header__Array__Class* get_class() {
            return il2cpp::get_class<app::Header__Array__Class>(type_info(), "System.Runtime.Remoting.Messaging", "Header[]");
        }
        inline app::Header__Array* create() {
            return il2cpp::create_object<app::Header__Array>(get_class());
        }
    } // namespace Header__Array
} // namespace app::classes::types
