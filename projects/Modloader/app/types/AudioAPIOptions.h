#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioAPIOptions {
        namespace {
            inline app::AudioAPIOptions__Class* type_info_ref = nullptr;
        }
        inline app::AudioAPIOptions__Class** type_info = &type_info_ref;
        inline app::AudioAPIOptions__Class* get_class() {
            return il2cpp::get_class<app::AudioAPIOptions__Class>(type_info, "", "AudioAPIOptions");
        }
        inline app::AudioAPIOptions* create() {
            return il2cpp::create_object<app::AudioAPIOptions>(get_class());
        }
    } // namespace AudioAPIOptions
} // namespace app::classes::types
