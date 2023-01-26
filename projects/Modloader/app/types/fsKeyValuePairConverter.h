#pragma once
#include <Modloader/app/structs/fsKeyValuePairConverter.h>
#include <Modloader/app/structs/fsKeyValuePairConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsKeyValuePairConverter {
        inline app::fsKeyValuePairConverter__Class** type_info() {
            static app::fsKeyValuePairConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsKeyValuePairConverter__Class**)(modloader::win::memory::resolve_rva(0x04708F60));
            }
            return cache;
        }
        inline app::fsKeyValuePairConverter__Class* get_class() {
            return il2cpp::get_class<app::fsKeyValuePairConverter__Class>(type_info(), "FullSerializer.Internal", "fsKeyValuePairConverter");
        }
        inline app::fsKeyValuePairConverter* create() {
            return il2cpp::create_object<app::fsKeyValuePairConverter>(get_class());
        }
    } // namespace fsKeyValuePairConverter
} // namespace app::classes::types
