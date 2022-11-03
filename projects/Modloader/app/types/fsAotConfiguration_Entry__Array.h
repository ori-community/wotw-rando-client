#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsAotConfiguration_Entry__Array {
        namespace {
            inline app::fsAotConfiguration_Entry__Array__Class* type_info_ref = nullptr;
        }
        inline app::fsAotConfiguration_Entry__Array__Class** type_info = &type_info_ref;
        inline app::fsAotConfiguration_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::fsAotConfiguration_Entry__Array__Class>(type_info, "FullSerializer", "fsAotConfiguration+Entry[]");
        }
        inline app::fsAotConfiguration_Entry__Array* create() {
            return il2cpp::create_object<app::fsAotConfiguration_Entry__Array>(get_class());
        }
    } // namespace fsAotConfiguration_Entry__Array
} // namespace app::classes::types
