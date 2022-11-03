#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerticalSpacer_Item__Array {
        namespace {
            inline app::VerticalSpacer_Item__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerticalSpacer_Item__Array__Class** type_info = &type_info_ref;
        inline app::VerticalSpacer_Item__Array__Class* get_class() {
            return il2cpp::get_class<app::VerticalSpacer_Item__Array__Class>(type_info, "", "VerticalSpacer+Item[]");
        }
        inline app::VerticalSpacer_Item__Array* create() {
            return il2cpp::create_object<app::VerticalSpacer_Item__Array>(get_class());
        }
    } // namespace VerticalSpacer_Item__Array
} // namespace app::classes::types
