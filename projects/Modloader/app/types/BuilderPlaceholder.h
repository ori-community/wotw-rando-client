#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderPlaceholder {
        namespace {
            inline app::BuilderPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::BuilderPlaceholder__Class** type_info = &type_info_ref;
        inline app::BuilderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::BuilderPlaceholder__Class>(type_info, "", "BuilderPlaceholder");
        }
        inline app::BuilderPlaceholder* create() {
            return il2cpp::create_object<app::BuilderPlaceholder>(get_class());
        }
    } // namespace BuilderPlaceholder
} // namespace app::classes::types
