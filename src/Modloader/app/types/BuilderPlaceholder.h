#pragma once
#include <Modloader/app/structs/BuilderPlaceholder.h>
#include <Modloader/app/structs/BuilderPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderPlaceholder {
        inline app::BuilderPlaceholder__Class** type_info() {
            static app::BuilderPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuilderPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuilderPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::BuilderPlaceholder__Class>(type_info(), "", "BuilderPlaceholder");
        }
        inline app::BuilderPlaceholder* create() {
            return il2cpp::create_object<app::BuilderPlaceholder>(get_class());
        }
    } // namespace BuilderPlaceholder
} // namespace app::classes::types
