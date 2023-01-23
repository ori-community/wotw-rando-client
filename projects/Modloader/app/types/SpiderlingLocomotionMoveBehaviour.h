#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderlingLocomotionMoveBehaviour__Class.h>
#include <Modloader/app/structs/SpiderlingLocomotionMoveBehaviour.h>

namespace app::classes::types {
    namespace SpiderlingLocomotionMoveBehaviour {
        namespace {
            inline app::SpiderlingLocomotionMoveBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingLocomotionMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderlingLocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingLocomotionMoveBehaviour__Class>(type_info, "", "SpiderlingLocomotionMoveBehaviour");
        }
        inline app::SpiderlingLocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingLocomotionMoveBehaviour>(get_class());
        }
    } // namespace SpiderlingLocomotionMoveBehaviour
} // namespace app::classes::types
