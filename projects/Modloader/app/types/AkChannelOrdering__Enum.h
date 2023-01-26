#pragma once
#include <Modloader/app/structs/AkChannelOrdering__Enum.h>
#include <Modloader/app/structs/AkChannelOrdering__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkChannelOrdering__Enum {
        inline app::AkChannelOrdering__Enum__Class** type_info() {
            static app::AkChannelOrdering__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkChannelOrdering__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkChannelOrdering__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkChannelOrdering__Enum__Class>(type_info(), "", "AkChannelOrdering");
        }
        inline app::AkChannelOrdering__Enum* create() {
            return il2cpp::create_object<app::AkChannelOrdering__Enum>(get_class());
        }
    } // namespace AkChannelOrdering__Enum
} // namespace app::classes::types
