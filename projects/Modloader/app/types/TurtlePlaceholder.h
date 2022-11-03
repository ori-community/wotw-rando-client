#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtlePlaceholder {
        namespace {
            inline app::TurtlePlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::TurtlePlaceholder__Class** type_info = &type_info_ref;
        inline app::TurtlePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TurtlePlaceholder__Class>(type_info, "", "TurtlePlaceholder");
        }
        inline app::TurtlePlaceholder* create() {
            return il2cpp::create_object<app::TurtlePlaceholder>(get_class());
        }
    } // namespace TurtlePlaceholder
} // namespace app::classes::types
