#pragma once
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/RequestCachePolicy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCachePolicy {
        inline app::RequestCachePolicy__Class** type_info() {
            static app::RequestCachePolicy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestCachePolicy__Class**)(modloader::win::memory::resolve_rva(0x04703F20));
            }
            return cache;
        }
        inline app::RequestCachePolicy__Class* get_class() {
            return il2cpp::get_class<app::RequestCachePolicy__Class>(type_info(), "System.Net.Cache", "RequestCachePolicy");
        }
        inline app::RequestCachePolicy* create() {
            return il2cpp::create_object<app::RequestCachePolicy>(get_class());
        }
    } // namespace RequestCachePolicy
} // namespace app::classes::types
