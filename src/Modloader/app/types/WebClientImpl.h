#pragma once
#include <Modloader/app/structs/WebClientImpl.h>
#include <Modloader/app/structs/WebClientImpl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebClientImpl {
        inline app::WebClientImpl__Class** type_info() {
            static app::WebClientImpl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebClientImpl__Class**)(modloader::win::memory::resolve_rva(0x04782BB8));
            }
            return cache;
        }
        inline app::WebClientImpl__Class* get_class() {
            return il2cpp::get_class<app::WebClientImpl__Class>(type_info(), "Moon.Network.Web", "WebClientImpl");
        }
        inline app::WebClientImpl* create() {
            return il2cpp::create_object<app::WebClientImpl>(get_class());
        }
    } // namespace WebClientImpl
} // namespace app::classes::types
