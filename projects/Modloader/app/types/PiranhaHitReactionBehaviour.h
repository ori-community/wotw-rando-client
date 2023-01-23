#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PiranhaHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/PiranhaHitReactionBehaviour.h>

namespace app::classes::types {
    namespace PiranhaHitReactionBehaviour {
        namespace {
            inline app::PiranhaHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaHitReactionBehaviour__Class>(type_info, "", "PiranhaHitReactionBehaviour");
        }
        inline app::PiranhaHitReactionBehaviour* create() {
            return il2cpp::create_object<app::PiranhaHitReactionBehaviour>(get_class());
        }
    } // namespace PiranhaHitReactionBehaviour
} // namespace app::classes::types
