#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SyncFramesTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SyncFramesTest__Class** type_info;
        inline app::SyncFramesTest__Class* get_class() {
            return il2cpp::get_class<app::SyncFramesTest__Class>(type_info, "", "SyncFramesTest");
        }
        inline app::SyncFramesTest* create() {
            return il2cpp::create_object<app::SyncFramesTest>(get_class());
        }
    } // namespace SyncFramesTest
} // namespace app::classes::types
