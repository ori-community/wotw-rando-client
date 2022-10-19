#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnSerializingAttribute {
        namespace {
            inline app::OnSerializingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OnSerializingAttribute__Class** type_info = &type_info_ref;
        inline app::OnSerializingAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnSerializingAttribute__Class>(type_info, "System.Runtime.Serialization", "OnSerializingAttribute");
        }
        inline app::OnSerializingAttribute* create() {
            return il2cpp::create_object<app::OnSerializingAttribute>(get_class());
        }
    } // namespace OnSerializingAttribute
} // namespace app::classes::types
