#pragma once
#include <Modloader/app/structs/InstantiateUtility.h>
#include <Modloader/app/structs/InstantiateUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility {
        inline app::InstantiateUtility__Class** type_info() {
            static app::InstantiateUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiateUtility__Class**)(modloader::win::memory::resolve_rva(0x04721660));
            }
            return cache;
        }
        inline app::InstantiateUtility__Class* get_class() {
            return il2cpp::get_class<app::InstantiateUtility__Class>(type_info(), "", "InstantiateUtility");
        }
        inline app::InstantiateUtility* create() {
            return il2cpp::create_object<app::InstantiateUtility>(get_class());
        }
    } // namespace InstantiateUtility
} // namespace app::classes::types
