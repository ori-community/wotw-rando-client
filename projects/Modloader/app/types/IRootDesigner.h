#pragma once
#include <Modloader/app/structs/IRootDesigner.h>
#include <Modloader/app/structs/IRootDesigner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRootDesigner {
        inline app::IRootDesigner__Class** type_info() {
            static app::IRootDesigner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRootDesigner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRootDesigner__Class* get_class() {
            return il2cpp::get_class<app::IRootDesigner__Class>(type_info(), "System.ComponentModel.Design", "IRootDesigner");
        }
    } // namespace IRootDesigner
} // namespace app::classes::types
