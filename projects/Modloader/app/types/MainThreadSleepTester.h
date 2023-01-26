#pragma once
#include <Modloader/app/structs/MainThreadSleepTester.h>
#include <Modloader/app/structs/MainThreadSleepTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainThreadSleepTester {
        inline app::MainThreadSleepTester__Class** type_info() {
            static app::MainThreadSleepTester__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MainThreadSleepTester__Class**)(modloader::win::memory::resolve_rva(0x0477F408));
            }
            return cache;
        }
        inline app::MainThreadSleepTester__Class* get_class() {
            return il2cpp::get_class<app::MainThreadSleepTester__Class>(type_info(), "", "MainThreadSleepTester");
        }
        inline app::MainThreadSleepTester* create() {
            return il2cpp::create_object<app::MainThreadSleepTester>(get_class());
        }
    } // namespace MainThreadSleepTester
} // namespace app::classes::types
