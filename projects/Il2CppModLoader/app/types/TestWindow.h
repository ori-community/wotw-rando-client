#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestWindow {
        namespace {
            app::TestWindow__Class* type_info_ref = nullptr;
        }
        app::TestWindow__Class** type_info = &type_info_ref;
        inline app::TestWindow__Class* get_class() {
            return il2cpp::get_class<app::TestWindow__Class>(type_info, "", "TestWindow");
        }
        inline app::TestWindow* create() {
            return il2cpp::create_object<app::TestWindow>(get_class());
        }
    } // namespace TestWindow
} // namespace app::classes::types
