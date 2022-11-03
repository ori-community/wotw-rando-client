#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExplosionDemo {
        namespace {
            inline app::ExplosionDemo__Class* type_info_ref = nullptr;
        }
        inline app::ExplosionDemo__Class** type_info = &type_info_ref;
        inline app::ExplosionDemo__Class* get_class() {
            return il2cpp::get_class<app::ExplosionDemo__Class>(type_info, "RootMotion.Demos", "ExplosionDemo");
        }
        inline app::ExplosionDemo* create() {
            return il2cpp::create_object<app::ExplosionDemo>(get_class());
        }
    } // namespace ExplosionDemo
} // namespace app::classes::types
