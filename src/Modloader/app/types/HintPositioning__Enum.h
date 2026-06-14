#pragma once
#include <Modloader/app/structs/HintPositioning__Enum.h>
#include <Modloader/app/structs/HintPositioning__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HintPositioning__Enum {
        inline app::HintPositioning__Enum__Class** type_info() {
            static app::HintPositioning__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HintPositioning__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475BF18));
            }
            return cache;
        }
        inline app::HintPositioning__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintPositioning__Enum__Class>(type_info(), "", "HintPositioning");
        }
        inline app::HintPositioning__Enum* create() {
            return il2cpp::create_object<app::HintPositioning__Enum>(get_class());
        }
    } // namespace HintPositioning__Enum
} // namespace app::classes::types
