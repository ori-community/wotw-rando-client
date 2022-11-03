#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TermInfoNumbers__Enum {
        namespace {
            inline app::TermInfoNumbers__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TermInfoNumbers__Enum__Class** type_info = &type_info_ref;
        inline app::TermInfoNumbers__Enum__Class* get_class() {
            return il2cpp::get_class<app::TermInfoNumbers__Enum__Class>(type_info, "System", "TermInfoNumbers");
        }
        inline app::TermInfoNumbers__Enum* create() {
            return il2cpp::create_object<app::TermInfoNumbers__Enum>(get_class());
        }
    } // namespace TermInfoNumbers__Enum
} // namespace app::classes::types
