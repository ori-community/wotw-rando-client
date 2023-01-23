#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PostProcessInfluencerOrder__Enum__Class.h>
#include <Modloader/app/structs/PostProcessInfluencerOrder__Enum.h>

namespace app::classes::types {
    namespace PostProcessInfluencerOrder__Enum {
        namespace {
            inline app::PostProcessInfluencerOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PostProcessInfluencerOrder__Enum__Class** type_info = &type_info_ref;
        inline app::PostProcessInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::PostProcessInfluencerOrder__Enum__Class>(type_info, "", "PostProcessInfluencerOrder");
        }
        inline app::PostProcessInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::PostProcessInfluencerOrder__Enum>(get_class());
        }
    } // namespace PostProcessInfluencerOrder__Enum
} // namespace app::classes::types
