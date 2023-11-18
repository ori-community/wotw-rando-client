#pragma once
#include <Modloader/app/structs/EndPointListener.h>
#include <Modloader/app/structs/EndPointListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EndPointListener {
        inline app::EndPointListener__Class** type_info() {
            static app::EndPointListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EndPointListener__Class**)(modloader::win::memory::resolve_rva(0x04739A08));
            }
            return cache;
        }
        inline app::EndPointListener__Class* get_class() {
            return il2cpp::get_class<app::EndPointListener__Class>(type_info(), "System.Net", "EndPointListener");
        }
        inline app::EndPointListener* create() {
            return il2cpp::create_object<app::EndPointListener>(get_class());
        }
    } // namespace EndPointListener
} // namespace app::classes::types
