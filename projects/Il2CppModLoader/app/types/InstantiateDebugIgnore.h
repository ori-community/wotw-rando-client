#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugIgnore {
        namespace {
            app::InstantiateDebugIgnore__Class* type_info_ref = nullptr;
        }
        app::InstantiateDebugIgnore__Class** type_info = &type_info_ref;
        inline app::InstantiateDebugIgnore__Class* get_class() {
            return il2cpp::get_class<app::InstantiateDebugIgnore__Class>(type_info, "InstantiateDebug", "InstantiateDebugIgnore");
        }
        inline app::InstantiateDebugIgnore* create() {
            return il2cpp::create_object<app::InstantiateDebugIgnore>(get_class());
        }
    } // namespace InstantiateDebugIgnore
} // namespace app::classes::types
