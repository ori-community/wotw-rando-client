#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlphaCombineMode__Enum {
        namespace {
            inline app::AlphaCombineMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AlphaCombineMode__Enum__Class** type_info = &type_info_ref;
        inline app::AlphaCombineMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlphaCombineMode__Enum__Class>(type_info, "", "AlphaCombineMode");
        }
        inline app::AlphaCombineMode__Enum* create() {
            return il2cpp::create_object<app::AlphaCombineMode__Enum>(get_class());
        }
    } // namespace AlphaCombineMode__Enum
} // namespace app::classes::types
