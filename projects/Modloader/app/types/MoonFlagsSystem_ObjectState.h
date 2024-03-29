#pragma once
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState.h>
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Array.h>
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem_ObjectState {
        inline app::MoonFlagsSystem_ObjectState__Class** type_info() {
            static app::MoonFlagsSystem_ObjectState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonFlagsSystem_ObjectState__Class**)(modloader::win::memory::resolve_rva(0x047477C8));
            }
            return cache;
        }
        inline app::MoonFlagsSystem_ObjectState__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonFlagsSystem_ObjectState__Class>(type_info(), "", "MoonFlagsSystem", "ObjectState");
        }
        inline app::MoonFlagsSystem_ObjectState* create() {
            return il2cpp::create_object<app::MoonFlagsSystem_ObjectState>(get_class());
        }
        inline app::MoonFlagsSystem_ObjectState__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonFlagsSystem_ObjectState__Array>(get_class(), size);
        }
        inline app::MoonFlagsSystem_ObjectState__Array* create_array(const std::vector<app::MoonFlagsSystem_ObjectState*>& items) {
            return il2cpp::array_new<app::MoonFlagsSystem_ObjectState__Array>(get_class(), items);
        }
    } // namespace MoonFlagsSystem_ObjectState
} // namespace app::classes::types
