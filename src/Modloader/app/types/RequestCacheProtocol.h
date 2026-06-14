#pragma once
#include <Modloader/app/structs/RequestCacheProtocol.h>
#include <Modloader/app/structs/RequestCacheProtocol__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCacheProtocol {
        inline app::RequestCacheProtocol__Class** type_info() {
            static app::RequestCacheProtocol__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestCacheProtocol__Class**)(modloader::win::memory::resolve_rva(0x047345C8));
            }
            return cache;
        }
        inline app::RequestCacheProtocol__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheProtocol__Class>(type_info(), "System.Net.Cache", "RequestCacheProtocol");
        }
        inline app::RequestCacheProtocol* create() {
            return il2cpp::create_object<app::RequestCacheProtocol>(get_class());
        }
    } // namespace RequestCacheProtocol
} // namespace app::classes::types
