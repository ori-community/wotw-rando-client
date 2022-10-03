#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnDeserializingAttribute {
        namespace {
            app::OnDeserializingAttribute__Class* type_info_ref = nullptr;
        }
        app::OnDeserializingAttribute__Class** type_info = &type_info_ref;
        inline app::OnDeserializingAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnDeserializingAttribute__Class>(type_info, "System.Runtime.Serialization", "OnDeserializingAttribute");
        }
        inline app::OnDeserializingAttribute* create() {
            return il2cpp::create_object<app::OnDeserializingAttribute>(get_class());
        }
    } // namespace OnDeserializingAttribute
} // namespace app::classes::types
