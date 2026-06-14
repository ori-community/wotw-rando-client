#pragma once
#include <Modloader/app/structs/fsConverterRegistrar.h>
#include <Modloader/app/structs/fsConverterRegistrar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsConverterRegistrar {
        inline app::fsConverterRegistrar__Class** type_info() {
            static app::fsConverterRegistrar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsConverterRegistrar__Class**)(modloader::win::memory::resolve_rva(0x04714BD8));
            }
            return cache;
        }
        inline app::fsConverterRegistrar__Class* get_class() {
            return il2cpp::get_class<app::fsConverterRegistrar__Class>(type_info(), "FullSerializer", "fsConverterRegistrar");
        }
        inline app::fsConverterRegistrar* create() {
            return il2cpp::create_object<app::fsConverterRegistrar>(get_class());
        }
    } // namespace fsConverterRegistrar
} // namespace app::classes::types
