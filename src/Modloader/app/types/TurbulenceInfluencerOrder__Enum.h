#pragma once
#include <Modloader/app/structs/TurbulenceInfluencerOrder__Enum.h>
#include <Modloader/app/structs/TurbulenceInfluencerOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceInfluencerOrder__Enum {
        inline app::TurbulenceInfluencerOrder__Enum__Class** type_info() {
            static app::TurbulenceInfluencerOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceInfluencerOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceInfluencerOrder__Enum__Class>(type_info(), "", "TurbulenceInfluencerOrder");
        }
        inline app::TurbulenceInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::TurbulenceInfluencerOrder__Enum>(get_class());
        }
    } // namespace TurbulenceInfluencerOrder__Enum
} // namespace app::classes::types
