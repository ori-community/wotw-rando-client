#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuideStone {
        namespace {
            inline app::GuideStone__Class* type_info_ref = nullptr;
        }
        inline app::GuideStone__Class** type_info = &type_info_ref;
        inline app::GuideStone__Class* get_class() {
            return il2cpp::get_class<app::GuideStone__Class>(type_info, "", "GuideStone");
        }
        inline app::GuideStone* create() {
            return il2cpp::create_object<app::GuideStone>(get_class());
        }
    } // namespace GuideStone
} // namespace app::classes::types
