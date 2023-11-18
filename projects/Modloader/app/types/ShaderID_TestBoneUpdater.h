#pragma once
#include <Modloader/app/structs/ShaderID_TestBoneUpdater.h>
#include <Modloader/app/structs/ShaderID_TestBoneUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_TestBoneUpdater {
        inline app::ShaderID_TestBoneUpdater__Class** type_info() {
            static app::ShaderID_TestBoneUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_TestBoneUpdater__Class**)(modloader::win::memory::resolve_rva(0x0470E800));
            }
            return cache;
        }
        inline app::ShaderID_TestBoneUpdater__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TestBoneUpdater__Class>(type_info(), "", "ShaderID_TestBoneUpdater");
        }
        inline app::ShaderID_TestBoneUpdater* create() {
            return il2cpp::create_object<app::ShaderID_TestBoneUpdater>(get_class());
        }
    } // namespace ShaderID_TestBoneUpdater
} // namespace app::classes::types
