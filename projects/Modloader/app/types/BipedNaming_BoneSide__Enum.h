#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedNaming_BoneSide__Enum {
        namespace {
            inline app::BipedNaming_BoneSide__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BipedNaming_BoneSide__Enum__Class** type_info = &type_info_ref;
        inline app::BipedNaming_BoneSide__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedNaming_BoneSide__Enum__Class>(type_info, "RootMotion", "BipedNaming", "BoneSide");
        }
        inline app::BipedNaming_BoneSide__Enum* create() {
            return il2cpp::create_object<app::BipedNaming_BoneSide__Enum>(get_class());
        }
    } // namespace BipedNaming_BoneSide__Enum
} // namespace app::classes::types
