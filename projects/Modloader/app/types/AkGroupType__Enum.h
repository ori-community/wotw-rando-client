#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkGroupType__Enum {
        namespace {
            inline app::AkGroupType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkGroupType__Enum__Class** type_info = &type_info_ref;
        inline app::AkGroupType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkGroupType__Enum__Class>(type_info, "", "AkGroupType");
        }
        inline app::AkGroupType__Enum* create() {
            return il2cpp::create_object<app::AkGroupType__Enum>(get_class());
        }
    } // namespace AkGroupType__Enum
} // namespace app::classes::types
