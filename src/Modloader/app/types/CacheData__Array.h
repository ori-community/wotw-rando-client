#pragma once
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/CacheData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CacheData__Array {
        inline app::CacheData__Array__Class** type_info() {
            static app::CacheData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CacheData__Array__Class**)(modloader::win::memory::resolve_rva(0x04754680));
            }
            return cache;
        }
        inline app::CacheData__Array__Class* get_class() {
            return il2cpp::get_class<app::CacheData__Array__Class>(type_info(), "SystemIntegration", "CacheData[]");
        }
        inline app::CacheData__Array* create() {
            return il2cpp::create_object<app::CacheData__Array>(get_class());
        }
    } // namespace CacheData__Array
} // namespace app::classes::types
