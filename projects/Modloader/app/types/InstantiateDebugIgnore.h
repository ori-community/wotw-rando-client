#pragma once
#include <Modloader/app/structs/InstantiateDebugIgnore.h>
#include <Modloader/app/structs/InstantiateDebugIgnore__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugIgnore {
        inline app::InstantiateDebugIgnore__Class** type_info() {
            static app::InstantiateDebugIgnore__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateDebugIgnore__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateDebugIgnore__Class* get_class() {
            return il2cpp::get_class<app::InstantiateDebugIgnore__Class>(type_info(), "InstantiateDebug", "InstantiateDebugIgnore");
        }
        inline app::InstantiateDebugIgnore* create() {
            return il2cpp::create_object<app::InstantiateDebugIgnore>(get_class());
        }
    } // namespace InstantiateDebugIgnore
} // namespace app::classes::types
