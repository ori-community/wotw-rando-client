#pragma once
#include <Modloader/app/structs/ServerObjectSerializer.h>
#include <Modloader/app/structs/ServerObjectSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerObjectSerializer {
        inline app::ServerObjectSerializer__Class** type_info() {
            static app::ServerObjectSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerObjectSerializer__Class**)(modloader::win::memory::resolve_rva(0x047166A0));
            }
            return cache;
        }
        inline app::ServerObjectSerializer__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectSerializer__Class>(type_info(), "", "ServerObjectSerializer");
        }
        inline app::ServerObjectSerializer* create() {
            return il2cpp::create_object<app::ServerObjectSerializer>(get_class());
        }
    } // namespace ServerObjectSerializer
} // namespace app::classes::types
