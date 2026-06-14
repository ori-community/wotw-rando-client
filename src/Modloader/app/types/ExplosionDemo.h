#pragma once
#include <Modloader/app/structs/ExplosionDemo.h>
#include <Modloader/app/structs/ExplosionDemo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExplosionDemo {
        inline app::ExplosionDemo__Class** type_info() {
            static app::ExplosionDemo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExplosionDemo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExplosionDemo__Class* get_class() {
            return il2cpp::get_class<app::ExplosionDemo__Class>(type_info(), "RootMotion.Demos", "ExplosionDemo");
        }
        inline app::ExplosionDemo* create() {
            return il2cpp::create_object<app::ExplosionDemo>(get_class());
        }
    } // namespace ExplosionDemo
} // namespace app::classes::types
