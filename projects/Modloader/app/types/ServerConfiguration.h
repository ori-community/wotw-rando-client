#pragma once
#include <Modloader/app/structs/ServerConfiguration.h>
#include <Modloader/app/structs/ServerConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerConfiguration {
        inline app::ServerConfiguration__Class** type_info() {
            static app::ServerConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04738948));
            }
            return cache;
        }
        inline app::ServerConfiguration__Class* get_class() {
            return il2cpp::get_class<app::ServerConfiguration__Class>(type_info(), "", "ServerConfiguration");
        }
        inline app::ServerConfiguration* create() {
            return il2cpp::create_object<app::ServerConfiguration>(get_class());
        }
    } // namespace ServerConfiguration
} // namespace app::classes::types
