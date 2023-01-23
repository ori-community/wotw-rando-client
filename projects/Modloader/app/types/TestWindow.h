#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestWindow__Class.h>
#include <Modloader/app/structs/TestWindow.h>

namespace app::classes::types {
    namespace TestWindow {
        namespace {
            inline app::TestWindow__Class* type_info_ref = nullptr;
        }
        inline app::TestWindow__Class** type_info = &type_info_ref;
        inline app::TestWindow__Class* get_class() {
            return il2cpp::get_class<app::TestWindow__Class>(type_info, "", "TestWindow");
        }
        inline app::TestWindow* create() {
            return il2cpp::create_object<app::TestWindow>(get_class());
        }
    } // namespace TestWindow
} // namespace app::classes::types
