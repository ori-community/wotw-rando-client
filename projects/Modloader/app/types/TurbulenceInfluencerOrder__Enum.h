#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceInfluencerOrder__Enum__Class.h>
#include <Modloader/app/structs/TurbulenceInfluencerOrder__Enum.h>

namespace app::classes::types {
    namespace TurbulenceInfluencerOrder__Enum {
        namespace {
            inline app::TurbulenceInfluencerOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceInfluencerOrder__Enum__Class** type_info = &type_info_ref;
        inline app::TurbulenceInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceInfluencerOrder__Enum__Class>(type_info, "", "TurbulenceInfluencerOrder");
        }
        inline app::TurbulenceInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::TurbulenceInfluencerOrder__Enum>(get_class());
        }
    } // namespace TurbulenceInfluencerOrder__Enum
} // namespace app::classes::types
