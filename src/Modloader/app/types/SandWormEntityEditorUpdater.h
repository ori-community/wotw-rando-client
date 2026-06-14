#pragma once
#include <Modloader/app/structs/SandWormEntityEditorUpdater.h>
#include <Modloader/app/structs/SandWormEntityEditorUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntityEditorUpdater {
        inline app::SandWormEntityEditorUpdater__Class** type_info() {
            static app::SandWormEntityEditorUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntityEditorUpdater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntityEditorUpdater__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntityEditorUpdater__Class>(type_info(), "", "SandWormEntityEditorUpdater");
        }
        inline app::SandWormEntityEditorUpdater* create() {
            return il2cpp::create_object<app::SandWormEntityEditorUpdater>(get_class());
        }
    } // namespace SandWormEntityEditorUpdater
} // namespace app::classes::types
