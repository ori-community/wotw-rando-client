#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatClimbBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBatClimbBehaviour.h>

namespace app::classes::types {
    namespace SpiderBatClimbBehaviour {
        namespace {
            inline app::SpiderBatClimbBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatClimbBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatClimbBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatClimbBehaviour__Class>(type_info, "", "SpiderBatClimbBehaviour");
        }
        inline app::SpiderBatClimbBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatClimbBehaviour>(get_class());
        }
    } // namespace SpiderBatClimbBehaviour
} // namespace app::classes::types
