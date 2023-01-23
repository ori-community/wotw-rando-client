#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FrogDeathReactionBehaviour__Class.h>
#include <Modloader/app/structs/FrogDeathReactionBehaviour.h>

namespace app::classes::types {
    namespace FrogDeathReactionBehaviour {
        namespace {
            inline app::FrogDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FrogDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::FrogDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogDeathReactionBehaviour__Class>(type_info, "", "FrogDeathReactionBehaviour");
        }
        inline app::FrogDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogDeathReactionBehaviour>(get_class());
        }
    } // namespace FrogDeathReactionBehaviour
} // namespace app::classes::types
