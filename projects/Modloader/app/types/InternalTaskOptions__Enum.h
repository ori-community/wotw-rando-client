#pragma once
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/InternalTaskOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalTaskOptions__Enum {
        inline app::InternalTaskOptions__Enum__Class** type_info() {
            static app::InternalTaskOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalTaskOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalTaskOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalTaskOptions__Enum__Class>(type_info(), "System.Threading.Tasks", "InternalTaskOptions");
        }
        inline app::InternalTaskOptions__Enum* create() {
            return il2cpp::create_object<app::InternalTaskOptions__Enum>(get_class());
        }
    } // namespace InternalTaskOptions__Enum
} // namespace app::classes::types
