#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestBoneUpdater {
        namespace {
            app::TestBoneUpdater__Class* type_info_ref = nullptr;
        }
        app::TestBoneUpdater__Class** type_info = &type_info_ref;
        inline app::TestBoneUpdater__Class* get_class() {
            return il2cpp::get_class<app::TestBoneUpdater__Class>(type_info, "", "TestBoneUpdater");
        }
        inline app::TestBoneUpdater* create() {
            return il2cpp::create_object<app::TestBoneUpdater>(get_class());
        }
    } // namespace TestBoneUpdater
} // namespace app::classes::types
