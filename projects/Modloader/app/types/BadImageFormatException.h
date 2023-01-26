#pragma once
#include <Modloader/app/structs/BadImageFormatException.h>
#include <Modloader/app/structs/BadImageFormatException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BadImageFormatException {
        inline app::BadImageFormatException__Class** type_info() {
            static app::BadImageFormatException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BadImageFormatException__Class**)(modloader::win::memory::resolve_rva(0x04757828));
            }
            return cache;
        }
        inline app::BadImageFormatException__Class* get_class() {
            return il2cpp::get_class<app::BadImageFormatException__Class>(type_info(), "System", "BadImageFormatException");
        }
        inline app::BadImageFormatException* create() {
            return il2cpp::create_object<app::BadImageFormatException>(get_class());
        }
    } // namespace BadImageFormatException
} // namespace app::classes::types
