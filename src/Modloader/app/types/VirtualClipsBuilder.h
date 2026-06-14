#pragma once
#include <Modloader/app/structs/VirtualClipsBuilder.h>
#include <Modloader/app/structs/VirtualClipsBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder {
        inline app::VirtualClipsBuilder__Class** type_info() {
            static app::VirtualClipsBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualClipsBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualClipsBuilder__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsBuilder__Class>(type_info(), "", "VirtualClipsBuilder");
        }
        inline app::VirtualClipsBuilder* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder>(get_class());
        }
    } // namespace VirtualClipsBuilder
} // namespace app::classes::types
