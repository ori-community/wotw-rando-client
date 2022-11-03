#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkChannelOrdering__Enum {
        namespace {
            inline app::AkChannelOrdering__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkChannelOrdering__Enum__Class** type_info = &type_info_ref;
        inline app::AkChannelOrdering__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkChannelOrdering__Enum__Class>(type_info, "", "AkChannelOrdering");
        }
        inline app::AkChannelOrdering__Enum* create() {
            return il2cpp::create_object<app::AkChannelOrdering__Enum>(get_class());
        }
    } // namespace AkChannelOrdering__Enum
} // namespace app::classes::types
