#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DateTimeParse_DTT__Enum__Class.h>
#include <Modloader/app/structs/DateTimeParse_DTT__Enum.h>

namespace app::classes::types {
    namespace DateTimeParse_DTT__Enum {
        namespace {
            inline app::DateTimeParse_DTT__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DateTimeParse_DTT__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeParse_DTT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_DTT__Enum__Class>(type_info, "System", "DateTimeParse", "DTT");
        }
        inline app::DateTimeParse_DTT__Enum* create() {
            return il2cpp::create_object<app::DateTimeParse_DTT__Enum>(get_class());
        }
    } // namespace DateTimeParse_DTT__Enum
} // namespace app::classes::types
