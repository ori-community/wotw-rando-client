#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimerTextbox__Class.h>
#include <Modloader/app/structs/TimerTextbox.h>

namespace app::classes::types {
    namespace TimerTextbox {
        namespace {
            inline app::TimerTextbox__Class* type_info_ref = nullptr;
        }
        inline app::TimerTextbox__Class** type_info = &type_info_ref;
        inline app::TimerTextbox__Class* get_class() {
            return il2cpp::get_class<app::TimerTextbox__Class>(type_info, "", "TimerTextbox");
        }
        inline app::TimerTextbox* create() {
            return il2cpp::create_object<app::TimerTextbox>(get_class());
        }
    } // namespace TimerTextbox
} // namespace app::classes::types
