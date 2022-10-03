#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisposableTextures {
        namespace {
            app::DisposableTextures__Class* type_info_ref = nullptr;
        }
        app::DisposableTextures__Class** type_info = &type_info_ref;
        inline app::DisposableTextures__Class* get_class() {
            return il2cpp::get_class<app::DisposableTextures__Class>(type_info, "", "DisposableTextures");
        }
        inline app::DisposableTextures* create() {
            return il2cpp::create_object<app::DisposableTextures>(get_class());
        }
    } // namespace DisposableTextures
} // namespace app::classes::types
