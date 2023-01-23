#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashOwlState__Class.h>
#include <Modloader/app/structs/DashOwlState.h>

namespace app::classes::types {
    namespace DashOwlState {
        namespace {
            inline app::DashOwlState__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlState__Class** type_info = &type_info_ref;
        inline app::DashOwlState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlState__Class>(type_info, "", "DashOwlState");
        }
        inline app::DashOwlState* create() {
            return il2cpp::create_object<app::DashOwlState>(get_class());
        }
    } // namespace DashOwlState
} // namespace app::classes::types
