#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Statistics__Class.h>
#include <Modloader/app/structs/Statistics.h>

namespace app::classes::types {
    namespace Statistics {
        namespace {
            inline app::Statistics__Class* type_info_ref = nullptr;
        }
        inline app::Statistics__Class** type_info = &type_info_ref;
        inline app::Statistics__Class* get_class() {
            return il2cpp::get_class<app::Statistics__Class>(type_info, "PlayFab.MultiplayerModels", "Statistics");
        }
        inline app::Statistics* create() {
            return il2cpp::create_object<app::Statistics>(get_class());
        }
    } // namespace Statistics
} // namespace app::classes::types
