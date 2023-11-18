#pragma once
#include <Modloader/app/structs/AkSourceChannelOrdering__Enum.h>
#include <Modloader/app/structs/AkSourceChannelOrdering__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSourceChannelOrdering__Enum {
        inline app::AkSourceChannelOrdering__Enum__Class** type_info() {
            static app::AkSourceChannelOrdering__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSourceChannelOrdering__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSourceChannelOrdering__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkSourceChannelOrdering__Enum__Class>(type_info(), "", "AkSourceChannelOrdering");
        }
        inline app::AkSourceChannelOrdering__Enum* create() {
            return il2cpp::create_object<app::AkSourceChannelOrdering__Enum>(get_class());
        }
    } // namespace AkSourceChannelOrdering__Enum
} // namespace app::classes::types
