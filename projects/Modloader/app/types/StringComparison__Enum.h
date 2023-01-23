#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StringComparison__Enum__Class.h>
#include <Modloader/app/structs/StringComparison__Enum.h>

namespace app::classes::types {
    namespace StringComparison__Enum {
        namespace {
            inline app::StringComparison__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StringComparison__Enum__Class** type_info = &type_info_ref;
        inline app::StringComparison__Enum__Class* get_class() {
            return il2cpp::get_class<app::StringComparison__Enum__Class>(type_info, "System", "StringComparison");
        }
        inline app::StringComparison__Enum* create() {
            return il2cpp::create_object<app::StringComparison__Enum>(get_class());
        }
    } // namespace StringComparison__Enum
} // namespace app::classes::types
