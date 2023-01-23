#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrabKickUpReactionBehaviour__Class.h>
#include <Modloader/app/structs/CrabKickUpReactionBehaviour.h>

namespace app::classes::types {
    namespace CrabKickUpReactionBehaviour {
        namespace {
            inline app::CrabKickUpReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CrabKickUpReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabKickUpReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabKickUpReactionBehaviour__Class>(type_info, "", "CrabKickUpReactionBehaviour");
        }
        inline app::CrabKickUpReactionBehaviour* create() {
            return il2cpp::create_object<app::CrabKickUpReactionBehaviour>(get_class());
        }
    } // namespace CrabKickUpReactionBehaviour
} // namespace app::classes::types
