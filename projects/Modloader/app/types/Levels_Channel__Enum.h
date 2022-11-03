#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Levels_Channel__Enum {
        namespace {
            inline app::Levels_Channel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Levels_Channel__Enum__Class** type_info = &type_info_ref;
        inline app::Levels_Channel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Levels_Channel__Enum__Class>(type_info, "Colorful", "Levels", "Channel");
        }
        inline app::Levels_Channel__Enum* create() {
            return il2cpp::create_object<app::Levels_Channel__Enum>(get_class());
        }
    } // namespace Levels_Channel__Enum
} // namespace app::classes::types
