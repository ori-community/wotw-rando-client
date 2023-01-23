#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour.h>

namespace app::classes::types {
    namespace SpiderBatAcidSprayBehaviour {
        namespace {
            inline app::SpiderBatAcidSprayBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatAcidSprayBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatAcidSprayBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatAcidSprayBehaviour__Class>(type_info, "", "SpiderBatAcidSprayBehaviour");
        }
        inline app::SpiderBatAcidSprayBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatAcidSprayBehaviour>(get_class());
        }
    } // namespace SpiderBatAcidSprayBehaviour
} // namespace app::classes::types
