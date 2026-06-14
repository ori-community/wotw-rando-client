#pragma once
#include <Modloader/app/structs/IPostProcessInfluencerSceneBounded.h>
#include <Modloader/app/structs/IPostProcessInfluencerSceneBounded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPostProcessInfluencerSceneBounded {
        inline app::IPostProcessInfluencerSceneBounded__Class** type_info() {
            static app::IPostProcessInfluencerSceneBounded__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPostProcessInfluencerSceneBounded__Class**)(modloader::win::memory::resolve_rva(0x04746FF0));
            }
            return cache;
        }
        inline app::IPostProcessInfluencerSceneBounded__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencerSceneBounded__Class>(type_info(), "", "IPostProcessInfluencerSceneBounded");
        }
    } // namespace IPostProcessInfluencerSceneBounded
} // namespace app::classes::types
