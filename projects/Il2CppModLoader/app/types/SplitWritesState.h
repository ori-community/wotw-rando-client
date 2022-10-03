#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplitWritesState {
        namespace {
            app::SplitWritesState__Class* type_info_ref = nullptr;
        }
        app::SplitWritesState__Class** type_info = &type_info_ref;
        inline app::SplitWritesState__Class* get_class() {
            return il2cpp::get_class<app::SplitWritesState__Class>(type_info, "System.Net", "SplitWritesState");
        }
        inline app::SplitWritesState* create() {
            return il2cpp::create_object<app::SplitWritesState>(get_class());
        }
    } // namespace SplitWritesState
} // namespace app::classes::types
