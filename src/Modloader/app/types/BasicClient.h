#pragma once
#include <Modloader/app/structs/BasicClient.h>
#include <Modloader/app/structs/BasicClient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BasicClient {
        inline app::BasicClient__Class** type_info() {
            static app::BasicClient__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BasicClient__Class**)(modloader::win::memory::resolve_rva(0x04754B50));
            }
            return cache;
        }
        inline app::BasicClient__Class* get_class() {
            return il2cpp::get_class<app::BasicClient__Class>(type_info(), "System.Net", "BasicClient");
        }
        inline app::BasicClient* create() {
            return il2cpp::create_object<app::BasicClient>(get_class());
        }
    } // namespace BasicClient
} // namespace app::classes::types
