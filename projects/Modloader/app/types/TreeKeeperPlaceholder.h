#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TreeKeeperPlaceholder__Class.h>
#include <Modloader/app/structs/TreeKeeperPlaceholder.h>

namespace app::classes::types {
    namespace TreeKeeperPlaceholder {
        namespace {
            inline app::TreeKeeperPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::TreeKeeperPlaceholder__Class** type_info = &type_info_ref;
        inline app::TreeKeeperPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TreeKeeperPlaceholder__Class>(type_info, "", "TreeKeeperPlaceholder");
        }
        inline app::TreeKeeperPlaceholder* create() {
            return il2cpp::create_object<app::TreeKeeperPlaceholder>(get_class());
        }
    } // namespace TreeKeeperPlaceholder
} // namespace app::classes::types
