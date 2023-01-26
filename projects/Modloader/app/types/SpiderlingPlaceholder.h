#pragma once
#include <Modloader/app/structs/SpiderlingPlaceholder.h>
#include <Modloader/app/structs/SpiderlingPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingPlaceholder {
        inline app::SpiderlingPlaceholder__Class** type_info() {
            static app::SpiderlingPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingPlaceholder__Class>(type_info(), "", "SpiderlingPlaceholder");
        }
        inline app::SpiderlingPlaceholder* create() {
            return il2cpp::create_object<app::SpiderlingPlaceholder>(get_class());
        }
    } // namespace SpiderlingPlaceholder
} // namespace app::classes::types
