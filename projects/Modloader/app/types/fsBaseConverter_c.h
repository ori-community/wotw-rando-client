#pragma once
#include <Modloader/app/structs/fsBaseConverter_c.h>
#include <Modloader/app/structs/fsBaseConverter_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsBaseConverter_c {
        inline app::fsBaseConverter_c__Class** type_info() {
            static app::fsBaseConverter_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsBaseConverter_c__Class**)(modloader::win::memory::resolve_rva(0x0478A370));
            }
            return cache;
        }
        inline app::fsBaseConverter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::fsBaseConverter_c__Class>(type_info(), "FullSerializer", "fsBaseConverter", "<>c");
        }
        inline app::fsBaseConverter_c* create() {
            return il2cpp::create_object<app::fsBaseConverter_c>(get_class());
        }
    } // namespace fsBaseConverter_c
} // namespace app::classes::types
