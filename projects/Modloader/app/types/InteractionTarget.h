#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InteractionTarget__Class.h>
#include <Modloader/app/structs/InteractionTarget.h>
#include <Modloader/app/structs/InteractionTarget__Array.h>

namespace app::classes::types {
    namespace InteractionTarget {
        namespace {
            inline app::InteractionTarget__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTarget__Class** type_info = &type_info_ref;
        inline app::InteractionTarget__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget__Class>(type_info, "RootMotion.FinalIK", "InteractionTarget");
        }
        inline app::InteractionTarget* create() {
            return il2cpp::create_object<app::InteractionTarget>(get_class());
        }
        inline app::InteractionTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTarget__Array>(get_class(), size);
        }
        inline app::InteractionTarget__Array* create_array(const std::vector<app::InteractionTarget*>& items) {
            return il2cpp::array_new<app::InteractionTarget__Array>(get_class(), items);
        }
    } // namespace InteractionTarget
} // namespace app::classes::types
