#pragma once
#include <Modloader/app/structs/ManifestBuilder.h>
#include <Modloader/app/structs/ManifestBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManifestBuilder {
        inline app::ManifestBuilder__Class** type_info() {
            static app::ManifestBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ManifestBuilder__Class**)(modloader::win::memory::resolve_rva(0x047684D0));
            }
            return cache;
        }
        inline app::ManifestBuilder__Class* get_class() {
            return il2cpp::get_class<app::ManifestBuilder__Class>(type_info(), "System.Diagnostics.Tracing", "ManifestBuilder");
        }
        inline app::ManifestBuilder* create() {
            return il2cpp::create_object<app::ManifestBuilder>(get_class());
        }
    } // namespace ManifestBuilder
} // namespace app::classes::types
