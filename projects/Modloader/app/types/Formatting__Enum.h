#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Formatting__Enum__Class.h>
#include <Modloader/app/structs/Formatting__Enum.h>

namespace app::classes::types {
    namespace Formatting__Enum {
        namespace {
            inline app::Formatting__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Formatting__Enum__Class** type_info = &type_info_ref;
        inline app::Formatting__Enum__Class* get_class() {
            return il2cpp::get_class<app::Formatting__Enum__Class>(type_info, "System.Xml", "Formatting");
        }
        inline app::Formatting__Enum* create() {
            return il2cpp::create_object<app::Formatting__Enum>(get_class());
        }
    } // namespace Formatting__Enum
} // namespace app::classes::types
