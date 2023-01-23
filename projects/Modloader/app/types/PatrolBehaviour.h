#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PatrolBehaviour__Class.h>
#include <Modloader/app/structs/PatrolBehaviour.h>

namespace app::classes::types {
    namespace PatrolBehaviour {
        namespace {
            inline app::PatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::PatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PatrolBehaviour__Class>(type_info, "Moon", "PatrolBehaviour");
        }
        inline app::PatrolBehaviour* create() {
            return il2cpp::create_object<app::PatrolBehaviour>(get_class());
        }
    } // namespace PatrolBehaviour
} // namespace app::classes::types
