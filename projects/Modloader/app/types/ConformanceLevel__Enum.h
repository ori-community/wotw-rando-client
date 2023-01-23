#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConformanceLevel__Enum__Class.h>
#include <Modloader/app/structs/ConformanceLevel__Enum.h>

namespace app::classes::types {
    namespace ConformanceLevel__Enum {
        namespace {
            inline app::ConformanceLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConformanceLevel__Enum__Class** type_info = &type_info_ref;
        inline app::ConformanceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConformanceLevel__Enum__Class>(type_info, "System.Xml", "ConformanceLevel");
        }
        inline app::ConformanceLevel__Enum* create() {
            return il2cpp::create_object<app::ConformanceLevel__Enum>(get_class());
        }
    } // namespace ConformanceLevel__Enum
} // namespace app::classes::types
