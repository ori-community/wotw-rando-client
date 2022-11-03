#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Quality__Enum {
        namespace {
            inline app::Quality__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Quality__Enum__Class** type_info = &type_info_ref;
        inline app::Quality__Enum__Class* get_class() {
            return il2cpp::get_class<app::Quality__Enum__Class>(type_info, "AmplifyColor", "Quality");
        }
        inline app::Quality__Enum* create() {
            return il2cpp::create_object<app::Quality__Enum>(get_class());
        }
    } // namespace Quality__Enum
} // namespace app::classes::types
