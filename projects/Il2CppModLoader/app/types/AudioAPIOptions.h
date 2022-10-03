#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioAPIOptions {
        namespace {
            app::AudioAPIOptions__Class* type_info_ref = nullptr;
        }
        app::AudioAPIOptions__Class** type_info = &type_info_ref;
        inline app::AudioAPIOptions__Class* get_class() {
            return il2cpp::get_class<app::AudioAPIOptions__Class>(type_info, "", "AudioAPIOptions");
        }
        inline app::AudioAPIOptions* create() {
            return il2cpp::create_object<app::AudioAPIOptions>(get_class());
        }
    } // namespace AudioAPIOptions
} // namespace app::classes::types
