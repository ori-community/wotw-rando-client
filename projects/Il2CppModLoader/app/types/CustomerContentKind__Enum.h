#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomerContentKind__Enum {
        namespace {
            app::CustomerContentKind__Enum__Class* type_info_ref = nullptr;
        }
        app::CustomerContentKind__Enum__Class** type_info = &type_info_ref;
        inline app::CustomerContentKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::CustomerContentKind__Enum__Class>(type_info, "Microsoft.Applications.Events.DataModels", "CustomerContentKind");
        }
        inline app::CustomerContentKind__Enum* create() {
            return il2cpp::create_object<app::CustomerContentKind__Enum>(get_class());
        }
    } // namespace CustomerContentKind__Enum
} // namespace app::classes::types
