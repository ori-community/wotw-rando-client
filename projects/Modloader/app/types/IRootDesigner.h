#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRootDesigner {
        namespace {
            inline app::IRootDesigner__Class* type_info_ref = nullptr;
        }
        inline app::IRootDesigner__Class** type_info = &type_info_ref;
        inline app::IRootDesigner__Class* get_class() {
            return il2cpp::get_class<app::IRootDesigner__Class>(type_info, "System.ComponentModel.Design", "IRootDesigner");
        }
    } // namespace IRootDesigner
} // namespace app::classes::types
