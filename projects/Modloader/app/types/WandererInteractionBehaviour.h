#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererInteractionBehaviour__Class.h>
#include <Modloader/app/structs/WandererInteractionBehaviour.h>

namespace app::classes::types {
    namespace WandererInteractionBehaviour {
        namespace {
            inline app::WandererInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererInteractionBehaviour__Class>(type_info, "", "WandererInteractionBehaviour");
        }
        inline app::WandererInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererInteractionBehaviour>(get_class());
        }
    } // namespace WandererInteractionBehaviour
} // namespace app::classes::types
