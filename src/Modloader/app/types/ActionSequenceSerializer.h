#pragma once
#include <Modloader/app/structs/ActionSequenceSerializer.h>
#include <Modloader/app/structs/ActionSequenceSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionSequenceSerializer {
        inline app::ActionSequenceSerializer__Class** type_info() {
            static app::ActionSequenceSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionSequenceSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionSequenceSerializer__Class* get_class() {
            return il2cpp::get_class<app::ActionSequenceSerializer__Class>(type_info(), "", "ActionSequenceSerializer");
        }
        inline app::ActionSequenceSerializer* create() {
            return il2cpp::create_object<app::ActionSequenceSerializer>(get_class());
        }
    } // namespace ActionSequenceSerializer
} // namespace app::classes::types
