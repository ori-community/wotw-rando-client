#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MantisDeathReactionBehaviour__Class.h>
#include <Modloader/app/structs/MantisDeathReactionBehaviour.h>

namespace app::classes::types {
    namespace MantisDeathReactionBehaviour {
        namespace {
            inline app::MantisDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MantisDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisDeathReactionBehaviour__Class>(type_info, "", "MantisDeathReactionBehaviour");
        }
        inline app::MantisDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisDeathReactionBehaviour>(get_class());
        }
    } // namespace MantisDeathReactionBehaviour
} // namespace app::classes::types
