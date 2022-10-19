#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnDeserializedAttribute {
        namespace {
            inline app::OnDeserializedAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OnDeserializedAttribute__Class** type_info = &type_info_ref;
        inline app::OnDeserializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnDeserializedAttribute__Class>(type_info, "System.Runtime.Serialization", "OnDeserializedAttribute");
        }
        inline app::OnDeserializedAttribute* create() {
            return il2cpp::create_object<app::OnDeserializedAttribute>(get_class());
        }
    } // namespace OnDeserializedAttribute
} // namespace app::classes::types
