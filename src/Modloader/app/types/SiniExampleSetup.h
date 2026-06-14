#pragma once
#include <Modloader/app/structs/SiniExampleSetup.h>
#include <Modloader/app/structs/SiniExampleSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SiniExampleSetup {
        inline app::SiniExampleSetup__Class** type_info() {
            static app::SiniExampleSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SiniExampleSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SiniExampleSetup__Class* get_class() {
            return il2cpp::get_class<app::SiniExampleSetup__Class>(type_info(), "", "SiniExampleSetup");
        }
        inline app::SiniExampleSetup* create() {
            return il2cpp::create_object<app::SiniExampleSetup>(get_class());
        }
    } // namespace SiniExampleSetup
} // namespace app::classes::types
