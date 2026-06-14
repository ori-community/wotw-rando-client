#pragma once
#include <Modloader/app/structs/SeinLandOnTrigger.h>
#include <Modloader/app/structs/SeinLandOnTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLandOnTrigger {
        inline app::SeinLandOnTrigger__Class** type_info() {
            static app::SeinLandOnTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLandOnTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLandOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinLandOnTrigger__Class>(type_info(), "", "SeinLandOnTrigger");
        }
        inline app::SeinLandOnTrigger* create() {
            return il2cpp::create_object<app::SeinLandOnTrigger>(get_class());
        }
    } // namespace SeinLandOnTrigger
} // namespace app::classes::types
