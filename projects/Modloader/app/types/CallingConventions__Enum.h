#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallingConventions__Enum {
        namespace {
            inline app::CallingConventions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CallingConventions__Enum__Class** type_info = &type_info_ref;
        inline app::CallingConventions__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallingConventions__Enum__Class>(type_info, "System.Reflection", "CallingConventions");
        }
        inline app::CallingConventions__Enum* create() {
            return il2cpp::create_object<app::CallingConventions__Enum>(get_class());
        }
    } // namespace CallingConventions__Enum
} // namespace app::classes::types
