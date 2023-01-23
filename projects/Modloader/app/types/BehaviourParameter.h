#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BehaviourParameter__Class.h>
#include <Modloader/app/structs/BehaviourParameter.h>

namespace app::classes::types {
    namespace BehaviourParameter {
        namespace {
            inline app::BehaviourParameter__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourParameter__Class** type_info = &type_info_ref;
        inline app::BehaviourParameter__Class* get_class() {
            return il2cpp::get_class<app::BehaviourParameter__Class>(type_info, "Moon.BehaviourSystem", "BehaviourParameter");
        }
        inline app::BehaviourParameter* create() {
            return il2cpp::create_object<app::BehaviourParameter>(get_class());
        }
    } // namespace BehaviourParameter
} // namespace app::classes::types
