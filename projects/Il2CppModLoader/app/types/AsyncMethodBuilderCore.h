#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore {
        namespace {
            app::AsyncMethodBuilderCore__Class* type_info_ref = nullptr;
        }
        app::AsyncMethodBuilderCore__Class** type_info = &type_info_ref;
        inline app::AsyncMethodBuilderCore__Class* get_class() {
            return il2cpp::get_class<app::AsyncMethodBuilderCore__Class>(type_info, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
        }
        inline app::AsyncMethodBuilderCore* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore>(get_class());
        }
        inline app::AsyncMethodBuilderCore__Boxed* box(app::AsyncMethodBuilderCore value) {
            return il2cpp::box_value<app::AsyncMethodBuilderCore__Boxed>(get_class(), value);
        }
    } // namespace AsyncMethodBuilderCore
} // namespace app::classes::types
