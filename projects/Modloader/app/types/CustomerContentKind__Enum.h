#pragma once
#include <Modloader/app/structs/CustomerContentKind__Enum.h>
#include <Modloader/app/structs/CustomerContentKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomerContentKind__Enum {
        inline app::CustomerContentKind__Enum__Class** type_info() {
            static app::CustomerContentKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomerContentKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomerContentKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::CustomerContentKind__Enum__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "CustomerContentKind");
        }
        inline app::CustomerContentKind__Enum* create() {
            return il2cpp::create_object<app::CustomerContentKind__Enum>(get_class());
        }
    } // namespace CustomerContentKind__Enum
} // namespace app::classes::types
