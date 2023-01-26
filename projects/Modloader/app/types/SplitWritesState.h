#pragma once
#include <Modloader/app/structs/SplitWritesState.h>
#include <Modloader/app/structs/SplitWritesState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitWritesState {
        inline app::SplitWritesState__Class** type_info() {
            static app::SplitWritesState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitWritesState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitWritesState__Class* get_class() {
            return il2cpp::get_class<app::SplitWritesState__Class>(type_info(), "System.Net", "SplitWritesState");
        }
        inline app::SplitWritesState* create() {
            return il2cpp::create_object<app::SplitWritesState>(get_class());
        }
    } // namespace SplitWritesState
} // namespace app::classes::types
