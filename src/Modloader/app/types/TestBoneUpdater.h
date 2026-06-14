#pragma once
#include <Modloader/app/structs/TestBoneUpdater.h>
#include <Modloader/app/structs/TestBoneUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestBoneUpdater {
        inline app::TestBoneUpdater__Class** type_info() {
            static app::TestBoneUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestBoneUpdater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestBoneUpdater__Class* get_class() {
            return il2cpp::get_class<app::TestBoneUpdater__Class>(type_info(), "", "TestBoneUpdater");
        }
        inline app::TestBoneUpdater* create() {
            return il2cpp::create_object<app::TestBoneUpdater>(get_class());
        }
    } // namespace TestBoneUpdater
} // namespace app::classes::types
