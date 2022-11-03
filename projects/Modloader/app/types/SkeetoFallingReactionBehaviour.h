#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoFallingReactionBehaviour {
        namespace {
            inline app::SkeetoFallingReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoFallingReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoFallingReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoFallingReactionBehaviour__Class>(type_info, "", "SkeetoFallingReactionBehaviour");
        }
        inline app::SkeetoFallingReactionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoFallingReactionBehaviour>(get_class());
        }
    } // namespace SkeetoFallingReactionBehaviour
} // namespace app::classes::types
