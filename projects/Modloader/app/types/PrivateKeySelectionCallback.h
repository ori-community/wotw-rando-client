#pragma once
#include <Modloader/app/structs/PrivateKeySelectionCallback.h>
#include <Modloader/app/structs/PrivateKeySelectionCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrivateKeySelectionCallback {
        inline app::PrivateKeySelectionCallback__Class** type_info() {
            static app::PrivateKeySelectionCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrivateKeySelectionCallback__Class**)(modloader::win::memory::resolve_rva(0x0477EC80));
            }
            return cache;
        }
        inline app::PrivateKeySelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::PrivateKeySelectionCallback__Class>(type_info(), "Mono.Security.Protocol.Tls", "PrivateKeySelectionCallback");
        }
        inline app::PrivateKeySelectionCallback* create() {
            return il2cpp::create_object<app::PrivateKeySelectionCallback>(get_class());
        }
    } // namespace PrivateKeySelectionCallback
} // namespace app::classes::types
