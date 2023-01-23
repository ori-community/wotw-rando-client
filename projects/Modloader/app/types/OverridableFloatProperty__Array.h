#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OverridableFloatProperty__Array__Class.h>
#include <Modloader/app/structs/OverridableFloatProperty__Array.h>

namespace app::classes::types {
    namespace OverridableFloatProperty__Array {
        namespace {
            inline app::OverridableFloatProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::OverridableFloatProperty__Array__Class** type_info = &type_info_ref;
        inline app::OverridableFloatProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::OverridableFloatProperty__Array__Class>(type_info, "", "OverridableFloatProperty[]");
        }
        inline app::OverridableFloatProperty__Array* create() {
            return il2cpp::create_object<app::OverridableFloatProperty__Array>(get_class());
        }
    } // namespace OverridableFloatProperty__Array
} // namespace app::classes::types
