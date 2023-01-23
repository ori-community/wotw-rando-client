#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlaceholderGroup__Class.h>
#include <Modloader/app/structs/PlaceholderGroup.h>

namespace app::classes::types {
    namespace PlaceholderGroup {
        namespace {
            inline app::PlaceholderGroup__Class* type_info_ref = nullptr;
        }
        inline app::PlaceholderGroup__Class** type_info = &type_info_ref;
        inline app::PlaceholderGroup__Class* get_class() {
            return il2cpp::get_class<app::PlaceholderGroup__Class>(type_info, "", "PlaceholderGroup");
        }
        inline app::PlaceholderGroup* create() {
            return il2cpp::create_object<app::PlaceholderGroup>(get_class());
        }
    } // namespace PlaceholderGroup
} // namespace app::classes::types
