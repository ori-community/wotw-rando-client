#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour__Class.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour.h>

namespace app::classes::types {
    namespace MantisFallReactionBehaviour {
        namespace {
            inline app::MantisFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MantisFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisFallReactionBehaviour__Class>(type_info, "", "MantisFallReactionBehaviour");
        }
        inline app::MantisFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisFallReactionBehaviour>(get_class());
        }
    } // namespace MantisFallReactionBehaviour
} // namespace app::classes::types
