#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDialogNode__Array {
        namespace {
            inline app::IDialogNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDialogNode__Array__Class** type_info = &type_info_ref;
        inline app::IDialogNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogNode__Array__Class>(type_info, "", "IDialogNode[]");
        }
        inline app::IDialogNode__Array* create() {
            return il2cpp::create_object<app::IDialogNode__Array>(get_class());
        }
    } // namespace IDialogNode__Array
} // namespace app::classes::types
