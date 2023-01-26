#pragma once
#include <Modloader/app/structs/DigestClient.h>
#include <Modloader/app/structs/DigestClient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DigestClient {
        inline app::DigestClient__Class** type_info() {
            static app::DigestClient__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DigestClient__Class**)(modloader::win::memory::resolve_rva(0x04731908));
            }
            return cache;
        }
        inline app::DigestClient__Class* get_class() {
            return il2cpp::get_class<app::DigestClient__Class>(type_info(), "System.Net", "DigestClient");
        }
        inline app::DigestClient* create() {
            return il2cpp::create_object<app::DigestClient>(get_class());
        }
    } // namespace DigestClient
} // namespace app::classes::types
