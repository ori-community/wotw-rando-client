#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReadOnlyAttribute_2__Class.h>
#include <Modloader/app/structs/ReadOnlyAttribute_2.h>

namespace app::classes::types {
    namespace ReadOnlyAttribute_2 {
        namespace {
            inline app::ReadOnlyAttribute_2__Class* type_info_ref = nullptr;
        }
        inline app::ReadOnlyAttribute_2__Class** type_info = &type_info_ref;
        inline app::ReadOnlyAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyAttribute_2__Class>(type_info, "Moon.Attributes", "ReadOnlyAttribute");
        }
        inline app::ReadOnlyAttribute_2* create() {
            return il2cpp::create_object<app::ReadOnlyAttribute_2>(get_class());
        }
    } // namespace ReadOnlyAttribute_2
} // namespace app::classes::types
