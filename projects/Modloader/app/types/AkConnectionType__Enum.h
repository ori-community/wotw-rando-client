#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkConnectionType__Enum__Class.h>
#include <Modloader/app/structs/AkConnectionType__Enum.h>

namespace app::classes::types {
    namespace AkConnectionType__Enum {
        namespace {
            inline app::AkConnectionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkConnectionType__Enum__Class** type_info = &type_info_ref;
        inline app::AkConnectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkConnectionType__Enum__Class>(type_info, "", "AkConnectionType");
        }
        inline app::AkConnectionType__Enum* create() {
            return il2cpp::create_object<app::AkConnectionType__Enum>(get_class());
        }
    } // namespace AkConnectionType__Enum
} // namespace app::classes::types
