#pragma once
#include <Modloader/app/structs/DirtyUtility.h>
#include <Modloader/app/structs/DirtyUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirtyUtility {
        inline app::DirtyUtility__Class** type_info() {
            static app::DirtyUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirtyUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirtyUtility__Class* get_class() {
            return il2cpp::get_class<app::DirtyUtility__Class>(type_info(), "", "DirtyUtility");
        }
        inline app::DirtyUtility* create() {
            return il2cpp::create_object<app::DirtyUtility>(get_class());
        }
    } // namespace DirtyUtility
} // namespace app::classes::types
