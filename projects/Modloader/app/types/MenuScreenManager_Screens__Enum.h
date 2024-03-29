#pragma once
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum.h>
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum__Array.h>
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_Screens__Enum {
        inline app::MenuScreenManager_Screens__Enum__Class** type_info() {
            static app::MenuScreenManager_Screens__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuScreenManager_Screens__Enum__Class**)(modloader::win::memory::resolve_rva(0x04748E10));
            }
            return cache;
        }
        inline app::MenuScreenManager_Screens__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_Screens__Enum__Class>(type_info(), "", "MenuScreenManager", "Screens");
        }
        inline app::MenuScreenManager_Screens__Enum* create() {
            return il2cpp::create_object<app::MenuScreenManager_Screens__Enum>(get_class());
        }
        inline app::MenuScreenManager_Screens__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MenuScreenManager_Screens__Enum__Array>(get_class(), size);
        }
        inline app::MenuScreenManager_Screens__Enum__Array* create_array(const std::vector<app::MenuScreenManager_Screens__Enum*>& items) {
            return il2cpp::array_new<app::MenuScreenManager_Screens__Enum__Array>(get_class(), items);
        }
    } // namespace MenuScreenManager_Screens__Enum
} // namespace app::classes::types
