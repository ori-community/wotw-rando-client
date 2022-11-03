#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInteractionNode__Array {
        namespace {
            inline app::IInteractionNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::IInteractionNode__Array__Class** type_info = &type_info_ref;
        inline app::IInteractionNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNode__Array__Class>(type_info, "Moon.InteractionGraph", "IInteractionNode[]");
        }
        inline app::IInteractionNode__Array* create() {
            return il2cpp::create_object<app::IInteractionNode__Array>(get_class());
        }
    } // namespace IInteractionNode__Array
} // namespace app::classes::types
