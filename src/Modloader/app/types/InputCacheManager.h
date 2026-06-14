#pragma once
#include <Modloader/app/structs/InputCacheManager.h>
#include <Modloader/app/structs/InputCacheManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager {
        inline app::InputCacheManager__Class** type_info() {
            static app::InputCacheManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputCacheManager__Class**)(modloader::win::memory::resolve_rva(0x04703A50));
            }
            return cache;
        }
        inline app::InputCacheManager__Class* get_class() {
            return il2cpp::get_class<app::InputCacheManager__Class>(type_info(), "SmartInput", "InputCacheManager");
        }
        inline app::InputCacheManager* create() {
            return il2cpp::create_object<app::InputCacheManager>(get_class());
        }
    } // namespace InputCacheManager
} // namespace app::classes::types
