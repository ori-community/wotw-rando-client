#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SyncFramesTest {
        inline app::SyncFramesTest__Class** type_info = (app::SyncFramesTest__Class**)(modloader::win::memory::resolve_rva(0x047731C0));
        inline app::SyncFramesTest__Class* get_class() {
            return il2cpp::get_class<app::SyncFramesTest__Class>(type_info, "", "SyncFramesTest");
        }
        inline app::SyncFramesTest* create() {
            return il2cpp::create_object<app::SyncFramesTest>(get_class());
        }
    } // namespace SyncFramesTest
} // namespace app::classes::types
