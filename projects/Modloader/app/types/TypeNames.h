#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeNames {
        namespace {
            inline app::TypeNames__Class* type_info_ref = nullptr;
        }
        inline app::TypeNames__Class** type_info = &type_info_ref;
        inline app::TypeNames__Class* get_class() {
            return il2cpp::get_class<app::TypeNames__Class>(type_info, "System", "TypeNames");
        }
        inline app::TypeNames* create() {
            return il2cpp::create_object<app::TypeNames>(get_class());
        }
    } // namespace TypeNames
} // namespace app::classes::types
