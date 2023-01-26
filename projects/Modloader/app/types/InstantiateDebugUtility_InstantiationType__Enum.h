#pragma once
#include <Modloader/app/structs/InstantiateDebugUtility_InstantiationType__Enum.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstantiationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_InstantiationType__Enum {
        inline app::InstantiateDebugUtility_InstantiationType__Enum__Class** type_info() {
            static app::InstantiateDebugUtility_InstantiationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiateDebugUtility_InstantiationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471F600));
            }
            return cache;
        }
        inline app::InstantiateDebugUtility_InstantiationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateDebugUtility_InstantiationType__Enum__Class>(type_info(), "InstantiateDebug", "InstantiateDebugUtility", "InstantiationType");
        }
        inline app::InstantiateDebugUtility_InstantiationType__Enum* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_InstantiationType__Enum>(get_class());
        }
    } // namespace InstantiateDebugUtility_InstantiationType__Enum
} // namespace app::classes::types
