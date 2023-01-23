#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkMultiPositionType__Enum__Class.h>
#include <Modloader/app/structs/AkMultiPositionType__Enum.h>

namespace app::classes::types {
    namespace AkMultiPositionType__Enum {
        namespace {
            inline app::AkMultiPositionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkMultiPositionType__Enum__Class** type_info = &type_info_ref;
        inline app::AkMultiPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMultiPositionType__Enum__Class>(type_info, "", "AkMultiPositionType");
        }
        inline app::AkMultiPositionType__Enum* create() {
            return il2cpp::create_object<app::AkMultiPositionType__Enum>(get_class());
        }
    } // namespace AkMultiPositionType__Enum
} // namespace app::classes::types
