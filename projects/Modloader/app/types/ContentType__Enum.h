#pragma once
#include <Modloader/app/structs/ContentType__Enum.h>
#include <Modloader/app/structs/ContentType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentType__Enum {
        inline app::ContentType__Enum__Class** type_info() {
            static app::ContentType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContentType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047504B8));
            }
            return cache;
        }
        inline app::ContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContentType__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls", "ContentType");
        }
        inline app::ContentType__Enum* create() {
            return il2cpp::create_object<app::ContentType__Enum>(get_class());
        }
    } // namespace ContentType__Enum
} // namespace app::classes::types
