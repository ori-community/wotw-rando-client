#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ThreadInterruptedException__Class.h>
#include <Modloader/app/structs/ThreadInterruptedException.h>

namespace app::classes::types {
    namespace ThreadInterruptedException {
        namespace {
            inline app::ThreadInterruptedException__Class* type_info_ref = nullptr;
        }
        inline app::ThreadInterruptedException__Class** type_info = &type_info_ref;
        inline app::ThreadInterruptedException__Class* get_class() {
            return il2cpp::get_class<app::ThreadInterruptedException__Class>(type_info, "System.Threading", "ThreadInterruptedException");
        }
        inline app::ThreadInterruptedException* create() {
            return il2cpp::create_object<app::ThreadInterruptedException>(get_class());
        }
    } // namespace ThreadInterruptedException
} // namespace app::classes::types
