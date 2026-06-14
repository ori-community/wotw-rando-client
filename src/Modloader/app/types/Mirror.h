#pragma once
#include <Modloader/app/structs/Mirror.h>
#include <Modloader/app/structs/Mirror__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Mirror {
        inline app::Mirror__Class** type_info() {
            static app::Mirror__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Mirror__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Mirror__Class* get_class() {
            return il2cpp::get_class<app::Mirror__Class>(type_info(), "RootMotion.Demos", "Mirror");
        }
        inline app::Mirror* create() {
            return il2cpp::create_object<app::Mirror>(get_class());
        }
    } // namespace Mirror
} // namespace app::classes::types
