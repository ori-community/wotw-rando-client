#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugPlaceholder__Class.h>
#include <Modloader/app/structs/HornBugPlaceholder.h>

namespace app::classes::types {
    namespace HornBugPlaceholder {
        namespace {
            inline app::HornBugPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::HornBugPlaceholder__Class** type_info = &type_info_ref;
        inline app::HornBugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::HornBugPlaceholder__Class>(type_info, "", "HornBugPlaceholder");
        }
        inline app::HornBugPlaceholder* create() {
            return il2cpp::create_object<app::HornBugPlaceholder>(get_class());
        }
    } // namespace HornBugPlaceholder
} // namespace app::classes::types
