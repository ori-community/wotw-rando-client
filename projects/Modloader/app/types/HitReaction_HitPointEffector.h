#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector__Class.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector__Array.h>

namespace app::classes::types {
    namespace HitReaction_HitPointEffector {
        namespace {
            inline app::HitReaction_HitPointEffector__Class* type_info_ref = nullptr;
        }
        inline app::HitReaction_HitPointEffector__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointEffector__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPointEffector__Class>(type_info, "RootMotion.FinalIK", "HitReaction", "HitPointEffector");
        }
        inline app::HitReaction_HitPointEffector* create() {
            return il2cpp::create_object<app::HitReaction_HitPointEffector>(get_class());
        }
        inline app::HitReaction_HitPointEffector__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReaction_HitPointEffector__Array>(get_class(), size);
        }
        inline app::HitReaction_HitPointEffector__Array* create_array(const std::vector<app::HitReaction_HitPointEffector*>& items) {
            return il2cpp::array_new<app::HitReaction_HitPointEffector__Array>(get_class(), items);
        }
    } // namespace HitReaction_HitPointEffector
} // namespace app::classes::types
