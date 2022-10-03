#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntityEditorUpdater {
        namespace {
            app::SandWormEntityEditorUpdater__Class* type_info_ref = nullptr;
        }
        app::SandWormEntityEditorUpdater__Class** type_info = &type_info_ref;
        inline app::SandWormEntityEditorUpdater__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntityEditorUpdater__Class>(type_info, "", "SandWormEntityEditorUpdater");
        }
        inline app::SandWormEntityEditorUpdater* create() {
            return il2cpp::create_object<app::SandWormEntityEditorUpdater>(get_class());
        }
    } // namespace SandWormEntityEditorUpdater
} // namespace app::classes::types
