#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeArgumentHandle {
        namespace {
            inline app::RuntimeArgumentHandle__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeArgumentHandle__Class** type_info = &type_info_ref;
        inline app::RuntimeArgumentHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeArgumentHandle__Class>(type_info, "System", "RuntimeArgumentHandle");
        }
        inline app::RuntimeArgumentHandle* create() {
            return il2cpp::create_object<app::RuntimeArgumentHandle>(get_class());
        }
        inline app::RuntimeArgumentHandle__Boxed* box(app::RuntimeArgumentHandle value) {
            return il2cpp::box_value<app::RuntimeArgumentHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeArgumentHandle
} // namespace app::classes::types
