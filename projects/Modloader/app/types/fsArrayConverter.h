#pragma once
#include <Modloader/app/structs/fsArrayConverter.h>
#include <Modloader/app/structs/fsArrayConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsArrayConverter {
        inline app::fsArrayConverter__Class** type_info() {
            static app::fsArrayConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsArrayConverter__Class**)(modloader::win::memory::resolve_rva(0x0477D9E8));
            }
            return cache;
        }
        inline app::fsArrayConverter__Class* get_class() {
            return il2cpp::get_class<app::fsArrayConverter__Class>(type_info(), "FullSerializer.Internal", "fsArrayConverter");
        }
        inline app::fsArrayConverter* create() {
            return il2cpp::create_object<app::fsArrayConverter>(get_class());
        }
    } // namespace fsArrayConverter
} // namespace app::classes::types
