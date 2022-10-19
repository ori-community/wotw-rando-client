#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPostProcessInfluencerSceneBounded {
        inline app::IPostProcessInfluencerSceneBounded__Class** type_info = (app::IPostProcessInfluencerSceneBounded__Class**)(modloader::win::memory::resolve_rva(0x04746FF0));
        inline app::IPostProcessInfluencerSceneBounded__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencerSceneBounded__Class>(type_info, "", "IPostProcessInfluencerSceneBounded");
        }
    } // namespace IPostProcessInfluencerSceneBounded
} // namespace app::classes::types
