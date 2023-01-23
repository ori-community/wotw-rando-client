#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GardenerPlaceholder__Class.h>
#include <Modloader/app/structs/GardenerPlaceholder.h>

namespace app::classes::types {
    namespace GardenerPlaceholder {
        namespace {
            inline app::GardenerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::GardenerPlaceholder__Class** type_info = &type_info_ref;
        inline app::GardenerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::GardenerPlaceholder__Class>(type_info, "", "GardenerPlaceholder");
        }
        inline app::GardenerPlaceholder* create() {
            return il2cpp::create_object<app::GardenerPlaceholder>(get_class());
        }
    } // namespace GardenerPlaceholder
} // namespace app::classes::types
