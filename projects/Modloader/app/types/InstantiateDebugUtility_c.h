#pragma once
#include <Modloader/app/structs/InstantiateDebugUtility_c.h>
#include <Modloader/app/structs/InstantiateDebugUtility_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_c {
        inline app::InstantiateDebugUtility_c__Class** type_info() {
            static app::InstantiateDebugUtility_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiateDebugUtility_c__Class**)(modloader::win::memory::resolve_rva(0x0471FEE8));
            }
            return cache;
        }
        inline app::InstantiateDebugUtility_c__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateDebugUtility_c__Class>(type_info(), "InstantiateDebug", "InstantiateDebugUtility", "<>c");
        }
        inline app::InstantiateDebugUtility_c* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_c>(get_class());
        }
    } // namespace InstantiateDebugUtility_c
} // namespace app::classes::types
