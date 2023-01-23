#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OverridableColorProperty__Array__Class.h>
#include <Modloader/app/structs/OverridableColorProperty__Array.h>

namespace app::classes::types {
    namespace OverridableColorProperty__Array {
        namespace {
            inline app::OverridableColorProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::OverridableColorProperty__Array__Class** type_info = &type_info_ref;
        inline app::OverridableColorProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::OverridableColorProperty__Array__Class>(type_info, "", "OverridableColorProperty[]");
        }
        inline app::OverridableColorProperty__Array* create() {
            return il2cpp::create_object<app::OverridableColorProperty__Array>(get_class());
        }
    } // namespace OverridableColorProperty__Array
} // namespace app::classes::types
