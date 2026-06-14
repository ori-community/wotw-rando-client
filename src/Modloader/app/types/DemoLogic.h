#pragma once
#include <Modloader/app/structs/DemoLogic.h>
#include <Modloader/app/structs/DemoLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DemoLogic {
        inline app::DemoLogic__Class** type_info() {
            static app::DemoLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DemoLogic__Class**)(modloader::win::memory::resolve_rva(0x047713C0));
            }
            return cache;
        }
        inline app::DemoLogic__Class* get_class() {
            return il2cpp::get_class<app::DemoLogic__Class>(type_info(), "", "DemoLogic");
        }
        inline app::DemoLogic* create() {
            return il2cpp::create_object<app::DemoLogic>(get_class());
        }
    } // namespace DemoLogic
} // namespace app::classes::types
