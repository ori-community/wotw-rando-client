#pragma once
#include <Modloader/app/structs/InstantiateDebugUtility.h>
#include <Modloader/app/structs/InstantiateDebugUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility {
        inline app::InstantiateDebugUtility__Class** type_info() {
            static app::InstantiateDebugUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiateDebugUtility__Class**)(modloader::win::memory::resolve_rva(0x04759098));
            }
            return cache;
        }
        inline app::InstantiateDebugUtility__Class* get_class() {
            return il2cpp::get_class<app::InstantiateDebugUtility__Class>(type_info(), "InstantiateDebug", "InstantiateDebugUtility");
        }
        inline app::InstantiateDebugUtility* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility>(get_class());
        }
    } // namespace InstantiateDebugUtility
} // namespace app::classes::types
