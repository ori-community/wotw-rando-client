#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowTextEntity__Array {
        namespace {
            inline app::ShowTextEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::ShowTextEntity__Array__Class** type_info = &type_info_ref;
        inline app::ShowTextEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::ShowTextEntity__Array__Class>(type_info, "Moon.Timeline", "ShowTextEntity[]");
        }
        inline app::ShowTextEntity__Array* create() {
            return il2cpp::create_object<app::ShowTextEntity__Array>(get_class());
        }
    } // namespace ShowTextEntity__Array
} // namespace app::classes::types
