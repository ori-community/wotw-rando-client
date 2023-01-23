#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NickHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/NickHitReactionBehaviour.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour {
        namespace {
            inline app::NickHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::NickHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::NickHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::NickHitReactionBehaviour__Class>(type_info, "", "NickHitReactionBehaviour");
        }
        inline app::NickHitReactionBehaviour* create() {
            return il2cpp::create_object<app::NickHitReactionBehaviour>(get_class());
        }
    } // namespace NickHitReactionBehaviour
} // namespace app::classes::types
