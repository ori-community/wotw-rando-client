#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NumberStyles__Enum__Class.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>

namespace app::classes::types {
    namespace NumberStyles__Enum {
        namespace {
            inline app::NumberStyles__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NumberStyles__Enum__Class** type_info = &type_info_ref;
        inline app::NumberStyles__Enum__Class* get_class() {
            return il2cpp::get_class<app::NumberStyles__Enum__Class>(type_info, "System.Globalization", "NumberStyles");
        }
        inline app::NumberStyles__Enum* create() {
            return il2cpp::create_object<app::NumberStyles__Enum>(get_class());
        }
    } // namespace NumberStyles__Enum
} // namespace app::classes::types
