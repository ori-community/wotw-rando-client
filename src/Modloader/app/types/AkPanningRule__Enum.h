#pragma once
#include <Modloader/app/structs/AkPanningRule__Enum.h>
#include <Modloader/app/structs/AkPanningRule__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPanningRule__Enum {
        inline app::AkPanningRule__Enum__Class** type_info() {
            static app::AkPanningRule__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkPanningRule__Enum__Class**)(modloader::win::memory::resolve_rva(0x047923D8));
            }
            return cache;
        }
        inline app::AkPanningRule__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkPanningRule__Enum__Class>(type_info(), "", "AkPanningRule");
        }
        inline app::AkPanningRule__Enum* create() {
            return il2cpp::create_object<app::AkPanningRule__Enum>(get_class());
        }
    } // namespace AkPanningRule__Enum
} // namespace app::classes::types
