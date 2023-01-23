#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SmallInteractivesPlaceholder__Class.h>
#include <Modloader/app/structs/SmallInteractivesPlaceholder.h>

namespace app::classes::types {
    namespace SmallInteractivesPlaceholder {
        namespace {
            inline app::SmallInteractivesPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SmallInteractivesPlaceholder__Class** type_info = &type_info_ref;
        inline app::SmallInteractivesPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SmallInteractivesPlaceholder__Class>(type_info, "", "SmallInteractivesPlaceholder");
        }
        inline app::SmallInteractivesPlaceholder* create() {
            return il2cpp::create_object<app::SmallInteractivesPlaceholder>(get_class());
        }
    } // namespace SmallInteractivesPlaceholder
} // namespace app::classes::types
