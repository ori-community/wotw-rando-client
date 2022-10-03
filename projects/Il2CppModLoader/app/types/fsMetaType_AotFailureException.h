#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsMetaType_AotFailureException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsMetaType_AotFailureException__Class** type_info;
        inline app::fsMetaType_AotFailureException__Class* get_class() {
            return il2cpp::get_nested_class<app::fsMetaType_AotFailureException__Class>(type_info, "FullSerializer", "fsMetaType", "AotFailureException");
        }
        inline app::fsMetaType_AotFailureException* create() {
            return il2cpp::create_object<app::fsMetaType_AotFailureException>(get_class());
        }
    } // namespace fsMetaType_AotFailureException
} // namespace app::classes::types
