#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkSourceChannelOrdering__Enum__Class.h>
#include <Modloader/app/structs/AkSourceChannelOrdering__Enum.h>

namespace app::classes::types {
    namespace AkSourceChannelOrdering__Enum {
        namespace {
            inline app::AkSourceChannelOrdering__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkSourceChannelOrdering__Enum__Class** type_info = &type_info_ref;
        inline app::AkSourceChannelOrdering__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkSourceChannelOrdering__Enum__Class>(type_info, "", "AkSourceChannelOrdering");
        }
        inline app::AkSourceChannelOrdering__Enum* create() {
            return il2cpp::create_object<app::AkSourceChannelOrdering__Enum>(get_class());
        }
    } // namespace AkSourceChannelOrdering__Enum
} // namespace app::classes::types
