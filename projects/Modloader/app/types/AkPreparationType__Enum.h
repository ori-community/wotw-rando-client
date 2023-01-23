#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkPreparationType__Enum__Class.h>
#include <Modloader/app/structs/AkPreparationType__Enum.h>

namespace app::classes::types {
    namespace AkPreparationType__Enum {
        namespace {
            inline app::AkPreparationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkPreparationType__Enum__Class** type_info = &type_info_ref;
        inline app::AkPreparationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkPreparationType__Enum__Class>(type_info, "", "AkPreparationType");
        }
        inline app::AkPreparationType__Enum* create() {
            return il2cpp::create_object<app::AkPreparationType__Enum>(get_class());
        }
    } // namespace AkPreparationType__Enum
} // namespace app::classes::types
