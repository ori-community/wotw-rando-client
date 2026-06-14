#pragma once
#include <Modloader/app/structs/SerObjectInfoInit.h>
#include <Modloader/app/structs/SerObjectInfoInit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerObjectInfoInit {
        inline app::SerObjectInfoInit__Class** type_info() {
            static app::SerObjectInfoInit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerObjectInfoInit__Class**)(modloader::win::memory::resolve_rva(0x0472F288));
            }
            return cache;
        }
        inline app::SerObjectInfoInit__Class* get_class() {
            return il2cpp::get_class<app::SerObjectInfoInit__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
        }
        inline app::SerObjectInfoInit* create() {
            return il2cpp::create_object<app::SerObjectInfoInit>(get_class());
        }
    } // namespace SerObjectInfoInit
} // namespace app::classes::types
