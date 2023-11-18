#pragma once
#include <Modloader/app/structs/SyncFramesTest.h>
#include <Modloader/app/structs/SyncFramesTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SyncFramesTest {
        inline app::SyncFramesTest__Class** type_info() {
            static app::SyncFramesTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SyncFramesTest__Class**)(modloader::win::memory::resolve_rva(0x047731C0));
            }
            return cache;
        }
        inline app::SyncFramesTest__Class* get_class() {
            return il2cpp::get_class<app::SyncFramesTest__Class>(type_info(), "", "SyncFramesTest");
        }
        inline app::SyncFramesTest* create() {
            return il2cpp::create_object<app::SyncFramesTest>(get_class());
        }
    } // namespace SyncFramesTest
} // namespace app::classes::types
