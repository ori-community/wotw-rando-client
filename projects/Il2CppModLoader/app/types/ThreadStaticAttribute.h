#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThreadStaticAttribute {
        namespace {
            inline app::ThreadStaticAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ThreadStaticAttribute__Class** type_info = &type_info_ref;
        inline app::ThreadStaticAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadStaticAttribute__Class>(type_info, "System", "ThreadStaticAttribute");
        }
        inline app::ThreadStaticAttribute* create() {
            return il2cpp::create_object<app::ThreadStaticAttribute>(get_class());
        }
    } // namespace ThreadStaticAttribute
} // namespace app::classes::types
