#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClearFlagMode__Enum__Class.h>
#include <Modloader/app/structs/ClearFlagMode__Enum.h>

namespace app::classes::types {
    namespace ClearFlagMode__Enum {
        namespace {
            inline app::ClearFlagMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ClearFlagMode__Enum__Class** type_info = &type_info_ref;
        inline app::ClearFlagMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClearFlagMode__Enum__Class>(type_info, "Moon.Rendering", "ClearFlagMode");
        }
        inline app::ClearFlagMode__Enum* create() {
            return il2cpp::create_object<app::ClearFlagMode__Enum>(get_class());
        }
    } // namespace ClearFlagMode__Enum
} // namespace app::classes::types
