#pragma once
#include <Modloader/app/structs/AsyncMethodBuilderCore.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore__Boxed.h>
#include <Modloader/app/structs/AsyncMethodBuilderCore__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncMethodBuilderCore {
        inline app::AsyncMethodBuilderCore__Class** type_info() {
            static app::AsyncMethodBuilderCore__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncMethodBuilderCore__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncMethodBuilderCore__Class* get_class() {
            return il2cpp::get_class<app::AsyncMethodBuilderCore__Class>(type_info(), "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
        }
        inline app::AsyncMethodBuilderCore* create() {
            return il2cpp::create_object<app::AsyncMethodBuilderCore>(get_class());
        }
        inline app::AsyncMethodBuilderCore__Boxed* box(app::AsyncMethodBuilderCore value) {
            return il2cpp::box_value<app::AsyncMethodBuilderCore__Boxed>(get_class(), value);
        }
    } // namespace AsyncMethodBuilderCore
} // namespace app::classes::types
