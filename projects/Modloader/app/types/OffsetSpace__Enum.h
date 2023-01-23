#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OffsetSpace__Enum__Class.h>
#include <Modloader/app/structs/OffsetSpace__Enum.h>

namespace app::classes::types {
    namespace OffsetSpace__Enum {
        namespace {
            inline app::OffsetSpace__Enum__Class* type_info_ref = nullptr;
        }
        inline app::OffsetSpace__Enum__Class** type_info = &type_info_ref;
        inline app::OffsetSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::OffsetSpace__Enum__Class>(type_info, "Moon", "OffsetSpace");
        }
        inline app::OffsetSpace__Enum* create() {
            return il2cpp::create_object<app::OffsetSpace__Enum>(get_class());
        }
    } // namespace OffsetSpace__Enum
} // namespace app::classes::types
