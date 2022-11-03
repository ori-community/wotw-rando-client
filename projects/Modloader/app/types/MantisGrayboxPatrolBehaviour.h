#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisGrayboxPatrolBehaviour {
        namespace {
            inline app::MantisGrayboxPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MantisGrayboxPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisGrayboxPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisGrayboxPatrolBehaviour__Class>(type_info, "", "MantisGrayboxPatrolBehaviour");
        }
        inline app::MantisGrayboxPatrolBehaviour* create() {
            return il2cpp::create_object<app::MantisGrayboxPatrolBehaviour>(get_class());
        }
    } // namespace MantisGrayboxPatrolBehaviour
} // namespace app::classes::types
