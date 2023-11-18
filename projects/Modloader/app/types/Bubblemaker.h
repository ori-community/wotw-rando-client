#pragma once
#include <Modloader/app/structs/Bubblemaker.h>
#include <Modloader/app/structs/Bubblemaker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bubblemaker {
        inline app::Bubblemaker__Class** type_info() {
            static app::Bubblemaker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bubblemaker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bubblemaker__Class* get_class() {
            return il2cpp::get_class<app::Bubblemaker__Class>(type_info(), "", "Bubblemaker");
        }
        inline app::Bubblemaker* create() {
            return il2cpp::create_object<app::Bubblemaker>(get_class());
        }
    } // namespace Bubblemaker
} // namespace app::classes::types
