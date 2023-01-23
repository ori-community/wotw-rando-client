#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SplitWritesState__Class.h>
#include <Modloader/app/structs/SplitWritesState.h>

namespace app::classes::types {
    namespace SplitWritesState {
        namespace {
            inline app::SplitWritesState__Class* type_info_ref = nullptr;
        }
        inline app::SplitWritesState__Class** type_info = &type_info_ref;
        inline app::SplitWritesState__Class* get_class() {
            return il2cpp::get_class<app::SplitWritesState__Class>(type_info, "System.Net", "SplitWritesState");
        }
        inline app::SplitWritesState* create() {
            return il2cpp::create_object<app::SplitWritesState>(get_class());
        }
    } // namespace SplitWritesState
} // namespace app::classes::types
