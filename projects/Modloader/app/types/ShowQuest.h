#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowQuest {
        namespace {
            inline app::ShowQuest__Class* type_info_ref = nullptr;
        }
        inline app::ShowQuest__Class** type_info = &type_info_ref;
        inline app::ShowQuest__Class* get_class() {
            return il2cpp::get_class<app::ShowQuest__Class>(type_info, "", "ShowQuest");
        }
        inline app::ShowQuest* create() {
            return il2cpp::create_object<app::ShowQuest>(get_class());
        }
    } // namespace ShowQuest
} // namespace app::classes::types
