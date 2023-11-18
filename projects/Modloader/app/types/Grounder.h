#pragma once
#include <Modloader/app/structs/Grounder.h>
#include <Modloader/app/structs/Grounder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grounder {
        inline app::Grounder__Class** type_info() {
            static app::Grounder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Grounder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Grounder__Class* get_class() {
            return il2cpp::get_class<app::Grounder__Class>(type_info(), "RootMotion.FinalIK", "Grounder");
        }
        inline app::Grounder* create() {
            return il2cpp::create_object<app::Grounder>(get_class());
        }
    } // namespace Grounder
} // namespace app::classes::types
