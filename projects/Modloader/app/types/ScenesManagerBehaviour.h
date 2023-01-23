#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesManagerBehaviour__Class.h>
#include <Modloader/app/structs/ScenesManagerBehaviour.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviour {
        namespace {
            inline app::ScenesManagerBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ScenesManagerBehaviour__Class** type_info = &type_info_ref;
        inline app::ScenesManagerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviour__Class>(type_info, "", "ScenesManagerBehaviour");
        }
        inline app::ScenesManagerBehaviour* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviour>(get_class());
        }
    } // namespace ScenesManagerBehaviour
} // namespace app::classes::types
