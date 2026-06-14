#pragma once
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/Ku__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ku {
        inline app::Ku__Class** type_info() {
            static app::Ku__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ku__Class**)(modloader::win::memory::resolve_rva(0x04755AF8));
            }
            return cache;
        }
        inline app::Ku__Class* get_class() {
            return il2cpp::get_class<app::Ku__Class>(type_info(), "", "Ku");
        }
        inline app::Ku* create() {
            return il2cpp::create_object<app::Ku>(get_class());
        }
    } // namespace Ku
} // namespace app::classes::types
