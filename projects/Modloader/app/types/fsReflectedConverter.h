#pragma once
#include <Modloader/app/structs/fsReflectedConverter.h>
#include <Modloader/app/structs/fsReflectedConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsReflectedConverter {
        inline app::fsReflectedConverter__Class** type_info() {
            static app::fsReflectedConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsReflectedConverter__Class**)(modloader::win::memory::resolve_rva(0x0473C430));
            }
            return cache;
        }
        inline app::fsReflectedConverter__Class* get_class() {
            return il2cpp::get_class<app::fsReflectedConverter__Class>(type_info(), "FullSerializer.Internal", "fsReflectedConverter");
        }
        inline app::fsReflectedConverter* create() {
            return il2cpp::create_object<app::fsReflectedConverter>(get_class());
        }
    } // namespace fsReflectedConverter
} // namespace app::classes::types
