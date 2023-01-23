#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestTagHelper_TestTypeTag__Enum__Class.h>
#include <Modloader/app/structs/TestTagHelper_TestTypeTag__Enum.h>

namespace app::classes::types {
    namespace TestTagHelper_TestTypeTag__Enum {
        inline app::TestTagHelper_TestTypeTag__Enum__Class** type_info = (app::TestTagHelper_TestTypeTag__Enum__Class**)(modloader::win::memory::resolve_rva(0x04744700));
        inline app::TestTagHelper_TestTypeTag__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TestTagHelper_TestTypeTag__Enum__Class>(type_info, "", "TestTagHelper", "TestTypeTag");
        }
        inline app::TestTagHelper_TestTypeTag__Enum* create() {
            return il2cpp::create_object<app::TestTagHelper_TestTypeTag__Enum>(get_class());
        }
    } // namespace TestTagHelper_TestTypeTag__Enum
} // namespace app::classes::types
