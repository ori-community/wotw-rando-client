#pragma once
#include <Modloader/app/structs/SeinHeadBumpTrigger.h>
#include <Modloader/app/structs/SeinHeadBumpTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHeadBumpTrigger {
        inline app::SeinHeadBumpTrigger__Class** type_info() {
            static app::SeinHeadBumpTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHeadBumpTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHeadBumpTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinHeadBumpTrigger__Class>(type_info(), "", "SeinHeadBumpTrigger");
        }
        inline app::SeinHeadBumpTrigger* create() {
            return il2cpp::create_object<app::SeinHeadBumpTrigger>(get_class());
        }
    } // namespace SeinHeadBumpTrigger
} // namespace app::classes::types
