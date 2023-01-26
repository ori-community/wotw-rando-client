#pragma once
#include <Modloader/app/structs/SharedStatics.h>
#include <Modloader/app/structs/SharedStatics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedStatics {
        inline app::SharedStatics__Class** type_info() {
            static app::SharedStatics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SharedStatics__Class**)(modloader::win::memory::resolve_rva(0x04783B00));
            }
            return cache;
        }
        inline app::SharedStatics__Class* get_class() {
            return il2cpp::get_class<app::SharedStatics__Class>(type_info(), "System", "SharedStatics");
        }
        inline app::SharedStatics* create() {
            return il2cpp::create_object<app::SharedStatics>(get_class());
        }
    } // namespace SharedStatics
} // namespace app::classes::types
