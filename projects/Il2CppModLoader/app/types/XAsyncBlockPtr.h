#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAsyncBlockPtr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XAsyncBlockPtr__Class** type_info;
        inline app::XAsyncBlockPtr__Class* get_class() {
            return il2cpp::get_class<app::XAsyncBlockPtr__Class>(type_info, "XGamingRuntime.Interop", "XAsyncBlockPtr");
        }
        inline app::XAsyncBlockPtr* create() {
            return il2cpp::create_object<app::XAsyncBlockPtr>(get_class());
        }
        inline app::XAsyncBlockPtr__Boxed* box(app::XAsyncBlockPtr value) {
            return il2cpp::box_value<app::XAsyncBlockPtr__Boxed>(get_class(), value);
        }
    } // namespace XAsyncBlockPtr
} // namespace app::classes::types
