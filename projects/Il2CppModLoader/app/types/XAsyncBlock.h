#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAsyncBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XAsyncBlock__Class** type_info;
        inline app::XAsyncBlock__Class* get_class() {
            return il2cpp::get_class<app::XAsyncBlock__Class>(type_info, "XGamingRuntime.Interop", "XAsyncBlock");
        }
        inline app::XAsyncBlock* create() {
            return il2cpp::create_object<app::XAsyncBlock>(get_class());
        }
        inline app::XAsyncBlock__Boxed* box(app::XAsyncBlock value) {
            return il2cpp::box_value<app::XAsyncBlock__Boxed>(get_class(), value);
        }
    } // namespace XAsyncBlock
} // namespace app::classes::types
