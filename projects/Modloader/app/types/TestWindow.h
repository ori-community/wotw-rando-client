#pragma once
#include <Modloader/app/structs/TestWindow.h>
#include <Modloader/app/structs/TestWindow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestWindow {
        inline app::TestWindow__Class** type_info() {
            static app::TestWindow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestWindow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestWindow__Class* get_class() {
            return il2cpp::get_class<app::TestWindow__Class>(type_info(), "", "TestWindow");
        }
        inline app::TestWindow* create() {
            return il2cpp::create_object<app::TestWindow>(get_class());
        }
    } // namespace TestWindow
} // namespace app::classes::types
