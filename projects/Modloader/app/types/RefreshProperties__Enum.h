#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RefreshProperties__Enum {
        namespace {
            inline app::RefreshProperties__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RefreshProperties__Enum__Class** type_info = &type_info_ref;
        inline app::RefreshProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::RefreshProperties__Enum__Class>(type_info, "System.ComponentModel", "RefreshProperties");
        }
        inline app::RefreshProperties__Enum* create() {
            return il2cpp::create_object<app::RefreshProperties__Enum>(get_class());
        }
    } // namespace RefreshProperties__Enum
} // namespace app::classes::types
