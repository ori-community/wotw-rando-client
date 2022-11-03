#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VSyncToggler {
        namespace {
            inline app::VSyncToggler__Class* type_info_ref = nullptr;
        }
        inline app::VSyncToggler__Class** type_info = &type_info_ref;
        inline app::VSyncToggler__Class* get_class() {
            return il2cpp::get_class<app::VSyncToggler__Class>(type_info, "", "VSyncToggler");
        }
        inline app::VSyncToggler* create() {
            return il2cpp::create_object<app::VSyncToggler>(get_class());
        }
    } // namespace VSyncToggler
} // namespace app::classes::types
