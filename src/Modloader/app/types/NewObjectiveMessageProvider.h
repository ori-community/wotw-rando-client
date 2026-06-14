#pragma once
#include <Modloader/app/structs/NewObjectiveMessageProvider.h>
#include <Modloader/app/structs/NewObjectiveMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewObjectiveMessageProvider {
        inline app::NewObjectiveMessageProvider__Class** type_info() {
            static app::NewObjectiveMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewObjectiveMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewObjectiveMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::NewObjectiveMessageProvider__Class>(type_info(), "", "NewObjectiveMessageProvider");
        }
        inline app::NewObjectiveMessageProvider* create() {
            return il2cpp::create_object<app::NewObjectiveMessageProvider>(get_class());
        }
    } // namespace NewObjectiveMessageProvider
} // namespace app::classes::types
