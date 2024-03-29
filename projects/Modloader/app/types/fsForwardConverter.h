#pragma once
#include <Modloader/app/structs/fsForwardConverter.h>
#include <Modloader/app/structs/fsForwardConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsForwardConverter {
        inline app::fsForwardConverter__Class** type_info() {
            static app::fsForwardConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsForwardConverter__Class**)(modloader::win::memory::resolve_rva(0x04747608));
            }
            return cache;
        }
        inline app::fsForwardConverter__Class* get_class() {
            return il2cpp::get_class<app::fsForwardConverter__Class>(type_info(), "FullSerializer.Internal", "fsForwardConverter");
        }
        inline app::fsForwardConverter* create() {
            return il2cpp::create_object<app::fsForwardConverter>(get_class());
        }
    } // namespace fsForwardConverter
} // namespace app::classes::types
