#pragma once
#include <Modloader/app/structs/PIIKind__Enum.h>
#include <Modloader/app/structs/PIIKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PIIKind__Enum {
        inline app::PIIKind__Enum__Class** type_info() {
            static app::PIIKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PIIKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PIIKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::PIIKind__Enum__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "PIIKind");
        }
        inline app::PIIKind__Enum* create() {
            return il2cpp::create_object<app::PIIKind__Enum>(get_class());
        }
    } // namespace PIIKind__Enum
} // namespace app::classes::types
