#pragma once
#include <Modloader/app/structs/RequestCachingSectionInternal.h>
#include <Modloader/app/structs/RequestCachingSectionInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCachingSectionInternal {
        inline app::RequestCachingSectionInternal__Class** type_info() {
            static app::RequestCachingSectionInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestCachingSectionInternal__Class**)(modloader::win::memory::resolve_rva(0x0472D348));
            }
            return cache;
        }
        inline app::RequestCachingSectionInternal__Class* get_class() {
            return il2cpp::get_class<app::RequestCachingSectionInternal__Class>(type_info(), "System.Net.Cache", "RequestCachingSectionInternal");
        }
        inline app::RequestCachingSectionInternal* create() {
            return il2cpp::create_object<app::RequestCachingSectionInternal>(get_class());
        }
    } // namespace RequestCachingSectionInternal
} // namespace app::classes::types
