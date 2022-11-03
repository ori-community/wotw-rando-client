#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationType__Enum {
        namespace {
            inline app::AnimationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimationType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationType__Enum__Class>(type_info, "Moon", "AnimationType");
        }
        inline app::AnimationType__Enum* create() {
            return il2cpp::create_object<app::AnimationType__Enum>(get_class());
        }
    } // namespace AnimationType__Enum
} // namespace app::classes::types
