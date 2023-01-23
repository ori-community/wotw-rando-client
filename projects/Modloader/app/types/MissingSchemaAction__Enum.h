#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum__Class.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>

namespace app::classes::types {
    namespace MissingSchemaAction__Enum {
        namespace {
            inline app::MissingSchemaAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MissingSchemaAction__Enum__Class** type_info = &type_info_ref;
        inline app::MissingSchemaAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::MissingSchemaAction__Enum__Class>(type_info, "System.Data", "MissingSchemaAction");
        }
        inline app::MissingSchemaAction__Enum* create() {
            return il2cpp::create_object<app::MissingSchemaAction__Enum>(get_class());
        }
    } // namespace MissingSchemaAction__Enum
} // namespace app::classes::types
