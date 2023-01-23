#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TraversalBehaviour__Class.h>
#include <Modloader/app/structs/TraversalBehaviour.h>

namespace app::classes::types {
    namespace TraversalBehaviour {
        namespace {
            inline app::TraversalBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TraversalBehaviour__Class** type_info = &type_info_ref;
        inline app::TraversalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TraversalBehaviour__Class>(type_info, "", "TraversalBehaviour");
        }
        inline app::TraversalBehaviour* create() {
            return il2cpp::create_object<app::TraversalBehaviour>(get_class());
        }
    } // namespace TraversalBehaviour
} // namespace app::classes::types
