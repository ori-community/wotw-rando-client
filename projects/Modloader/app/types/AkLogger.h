#pragma once
#include <Modloader/app/structs/AkLogger.h>
#include <Modloader/app/structs/AkLogger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkLogger {
        inline app::AkLogger__Class** type_info() {
            static app::AkLogger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkLogger__Class**)(modloader::win::memory::resolve_rva(0x04766880));
            }
            return cache;
        }
        inline app::AkLogger__Class* get_class() {
            return il2cpp::get_class<app::AkLogger__Class>(type_info(), "", "AkLogger");
        }
        inline app::AkLogger* create() {
            return il2cpp::create_object<app::AkLogger>(get_class());
        }
    } // namespace AkLogger
} // namespace app::classes::types
