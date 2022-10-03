#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsMetaProperty__Array {
        namespace {
            app::fsMetaProperty__Array__Class* type_info_ref = nullptr;
        }
        app::fsMetaProperty__Array__Class** type_info = &type_info_ref;
        inline app::fsMetaProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::fsMetaProperty__Array__Class>(type_info, "FullSerializer.Internal", "fsMetaProperty[]");
        }
        inline app::fsMetaProperty__Array* create() {
            return il2cpp::create_object<app::fsMetaProperty__Array>(get_class());
        }
    } // namespace fsMetaProperty__Array
} // namespace app::classes::types
