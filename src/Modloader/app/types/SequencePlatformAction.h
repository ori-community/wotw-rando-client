#pragma once
#include <Modloader/app/structs/SequencePlatformAction.h>
#include <Modloader/app/structs/SequencePlatformAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequencePlatformAction {
        inline app::SequencePlatformAction__Class** type_info() {
            static app::SequencePlatformAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequencePlatformAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequencePlatformAction__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformAction__Class>(type_info(), "", "SequencePlatformAction");
        }
        inline app::SequencePlatformAction* create() {
            return il2cpp::create_object<app::SequencePlatformAction>(get_class());
        }
    } // namespace SequencePlatformAction
} // namespace app::classes::types
