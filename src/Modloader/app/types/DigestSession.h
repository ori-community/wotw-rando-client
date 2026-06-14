#pragma once
#include <Modloader/app/structs/DigestSession.h>
#include <Modloader/app/structs/DigestSession__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DigestSession {
        inline app::DigestSession__Class** type_info() {
            static app::DigestSession__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DigestSession__Class**)(modloader::win::memory::resolve_rva(0x0470E558));
            }
            return cache;
        }
        inline app::DigestSession__Class* get_class() {
            return il2cpp::get_class<app::DigestSession__Class>(type_info(), "System.Net", "DigestSession");
        }
        inline app::DigestSession* create() {
            return il2cpp::create_object<app::DigestSession>(get_class());
        }
    } // namespace DigestSession
} // namespace app::classes::types
