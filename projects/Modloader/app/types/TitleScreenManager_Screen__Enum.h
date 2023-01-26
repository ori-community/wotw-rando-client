#pragma once
#include <Modloader/app/structs/TitleScreenManager_Screen__Enum.h>
#include <Modloader/app/structs/TitleScreenManager_Screen__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleScreenManager_Screen__Enum {
        inline app::TitleScreenManager_Screen__Enum__Class** type_info() {
            static app::TitleScreenManager_Screen__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TitleScreenManager_Screen__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478A2A8));
            }
            return cache;
        }
        inline app::TitleScreenManager_Screen__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TitleScreenManager_Screen__Enum__Class>(type_info(), "", "TitleScreenManager", "Screen");
        }
        inline app::TitleScreenManager_Screen__Enum* create() {
            return il2cpp::create_object<app::TitleScreenManager_Screen__Enum>(get_class());
        }
    } // namespace TitleScreenManager_Screen__Enum
} // namespace app::classes::types
