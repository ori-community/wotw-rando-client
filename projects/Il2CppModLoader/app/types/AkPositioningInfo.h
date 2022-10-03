#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkPositioningInfo {
        namespace {
            app::AkPositioningInfo__Class* type_info_ref = nullptr;
        }
        app::AkPositioningInfo__Class** type_info = &type_info_ref;
        inline app::AkPositioningInfo__Class* get_class() {
            return il2cpp::get_class<app::AkPositioningInfo__Class>(type_info, "", "AkPositioningInfo");
        }
        inline app::AkPositioningInfo* create() {
            return il2cpp::create_object<app::AkPositioningInfo>(get_class());
        }
    } // namespace AkPositioningInfo
} // namespace app::classes::types
