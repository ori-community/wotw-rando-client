#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSpanParse_ParseFailureKind__Enum__Class.h>
#include <Modloader/app/structs/TimeSpanParse_ParseFailureKind__Enum.h>

namespace app::classes::types {
    namespace TimeSpanParse_ParseFailureKind__Enum {
        namespace {
            inline app::TimeSpanParse_ParseFailureKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimeSpanParse_ParseFailureKind__Enum__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_ParseFailureKind__Enum__Class>(type_info, "System.Globalization", "TimeSpanParse", "ParseFailureKind");
        }
        inline app::TimeSpanParse_ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::TimeSpanParse_ParseFailureKind__Enum>(get_class());
        }
    } // namespace TimeSpanParse_ParseFailureKind__Enum
} // namespace app::classes::types
