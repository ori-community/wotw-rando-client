#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContextStaticAttribute {
        namespace {
            inline app::ContextStaticAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ContextStaticAttribute__Class** type_info = &type_info_ref;
        inline app::ContextStaticAttribute__Class* get_class() {
            return il2cpp::get_class<app::ContextStaticAttribute__Class>(type_info, "System", "ContextStaticAttribute");
        }
        inline app::ContextStaticAttribute* create() {
            return il2cpp::create_object<app::ContextStaticAttribute>(get_class());
        }
    } // namespace ContextStaticAttribute
} // namespace app::classes::types
