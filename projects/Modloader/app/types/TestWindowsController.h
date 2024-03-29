#pragma once
#include <Modloader/app/structs/TestWindowsController.h>
#include <Modloader/app/structs/TestWindowsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestWindowsController {
        inline app::TestWindowsController__Class** type_info() {
            static app::TestWindowsController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestWindowsController__Class**)(modloader::win::memory::resolve_rva(0x0478A780));
            }
            return cache;
        }
        inline app::TestWindowsController__Class* get_class() {
            return il2cpp::get_class<app::TestWindowsController__Class>(type_info(), "", "TestWindowsController");
        }
        inline app::TestWindowsController* create() {
            return il2cpp::create_object<app::TestWindowsController>(get_class());
        }
    } // namespace TestWindowsController
} // namespace app::classes::types
