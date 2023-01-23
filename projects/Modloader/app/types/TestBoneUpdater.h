#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TestBoneUpdater__Class.h>
#include <Modloader/app/structs/TestBoneUpdater.h>

namespace app::classes::types {
    namespace TestBoneUpdater {
        namespace {
            inline app::TestBoneUpdater__Class* type_info_ref = nullptr;
        }
        inline app::TestBoneUpdater__Class** type_info = &type_info_ref;
        inline app::TestBoneUpdater__Class* get_class() {
            return il2cpp::get_class<app::TestBoneUpdater__Class>(type_info, "", "TestBoneUpdater");
        }
        inline app::TestBoneUpdater* create() {
            return il2cpp::create_object<app::TestBoneUpdater>(get_class());
        }
    } // namespace TestBoneUpdater
} // namespace app::classes::types
