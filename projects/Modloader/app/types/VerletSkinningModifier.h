#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletSkinningModifier {
        inline app::VerletSkinningModifier__Class** type_info = (app::VerletSkinningModifier__Class**)(modloader::win::memory::resolve_rva(0x04708A90));
        inline app::VerletSkinningModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinningModifier__Class>(type_info, "", "VerletSkinningModifier");
        }
        inline app::VerletSkinningModifier* create() {
            return il2cpp::create_object<app::VerletSkinningModifier>(get_class());
        }
    } // namespace VerletSkinningModifier
} // namespace app::classes::types
