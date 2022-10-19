#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchJointsPostprocess {
        namespace {
            inline app::MatchJointsPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::MatchJointsPostprocess__Class** type_info = &type_info_ref;
        inline app::MatchJointsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::MatchJointsPostprocess__Class>(type_info, "Moon.Animation", "MatchJointsPostprocess");
        }
        inline app::MatchJointsPostprocess* create() {
            return il2cpp::create_object<app::MatchJointsPostprocess>(get_class());
        }
    } // namespace MatchJointsPostprocess
} // namespace app::classes::types
