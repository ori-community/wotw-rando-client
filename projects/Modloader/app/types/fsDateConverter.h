#pragma once
#include <Modloader/app/structs/fsDateConverter.h>
#include <Modloader/app/structs/fsDateConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsDateConverter {
        inline app::fsDateConverter__Class** type_info() {
            static app::fsDateConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsDateConverter__Class**)(modloader::win::memory::resolve_rva(0x0470E880));
            }
            return cache;
        }
        inline app::fsDateConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDateConverter__Class>(type_info(), "FullSerializer.Internal", "fsDateConverter");
        }
        inline app::fsDateConverter* create() {
            return il2cpp::create_object<app::fsDateConverter>(get_class());
        }
    } // namespace fsDateConverter
} // namespace app::classes::types
