#pragma once
#include <Modloader/app/structs/ThreadHelper.h>
#include <Modloader/app/structs/ThreadHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadHelper {
        inline app::ThreadHelper__Class** type_info() {
            static app::ThreadHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadHelper__Class**)(modloader::win::memory::resolve_rva(0x04777D28));
            }
            return cache;
        }
        inline app::ThreadHelper__Class* get_class() {
            return il2cpp::get_class<app::ThreadHelper__Class>(type_info(), "System.Threading", "ThreadHelper");
        }
        inline app::ThreadHelper* create() {
            return il2cpp::create_object<app::ThreadHelper>(get_class());
        }
    } // namespace ThreadHelper
} // namespace app::classes::types
