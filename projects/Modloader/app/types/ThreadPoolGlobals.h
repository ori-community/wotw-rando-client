#pragma once
#include <Modloader/app/structs/ThreadPoolGlobals.h>
#include <Modloader/app/structs/ThreadPoolGlobals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPoolGlobals {
        inline app::ThreadPoolGlobals__Class** type_info() {
            static app::ThreadPoolGlobals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPoolGlobals__Class**)(modloader::win::memory::resolve_rva(0x0473E498));
            }
            return cache;
        }
        inline app::ThreadPoolGlobals__Class* get_class() {
            return il2cpp::get_class<app::ThreadPoolGlobals__Class>(type_info(), "System.Threading", "ThreadPoolGlobals");
        }
        inline app::ThreadPoolGlobals* create() {
            return il2cpp::create_object<app::ThreadPoolGlobals>(get_class());
        }
    } // namespace ThreadPoolGlobals
} // namespace app::classes::types
