#pragma once
#include <Modloader/app/structs/ICameraInfluencer.h>
#include <Modloader/app/structs/ICameraInfluencer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICameraInfluencer {
        inline app::ICameraInfluencer__Class** type_info() {
            static app::ICameraInfluencer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICameraInfluencer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICameraInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ICameraInfluencer__Class>(type_info(), "", "ICameraInfluencer");
        }
    } // namespace ICameraInfluencer
} // namespace app::classes::types
