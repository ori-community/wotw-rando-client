#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExecuteAlways__Class.h>
#include <Modloader/app/structs/ExecuteAlways.h>

namespace app::classes::types {
    namespace ExecuteAlways {
        namespace {
            inline app::ExecuteAlways__Class* type_info_ref = nullptr;
        }
        inline app::ExecuteAlways__Class** type_info = &type_info_ref;
        inline app::ExecuteAlways__Class* get_class() {
            return il2cpp::get_class<app::ExecuteAlways__Class>(type_info, "UnityEngine", "ExecuteAlways");
        }
        inline app::ExecuteAlways* create() {
            return il2cpp::create_object<app::ExecuteAlways>(get_class());
        }
    } // namespace ExecuteAlways
} // namespace app::classes::types
