#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsReadOnlyAttribute_1__Class.h>
#include <Modloader/app/structs/IsReadOnlyAttribute_1.h>

namespace app::classes::types {
    namespace IsReadOnlyAttribute_1 {
        namespace {
            inline app::IsReadOnlyAttribute_1__Class* type_info_ref = nullptr;
        }
        inline app::IsReadOnlyAttribute_1__Class** type_info = &type_info_ref;
        inline app::IsReadOnlyAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::IsReadOnlyAttribute_1__Class>(type_info, "System.Runtime.CompilerServices", "IsReadOnlyAttribute");
        }
        inline app::IsReadOnlyAttribute_1* create() {
            return il2cpp::create_object<app::IsReadOnlyAttribute_1>(get_class());
        }
    } // namespace IsReadOnlyAttribute_1
} // namespace app::classes::types
