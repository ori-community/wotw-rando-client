#pragma once
#include <Modloader/app/structs/StatScreenDisplayFilter.h>
#include <Modloader/app/structs/StatScreenDisplayFilter__Array.h>
#include <Modloader/app/structs/StatScreenDisplayFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatScreenDisplayFilter {
        inline app::StatScreenDisplayFilter__Class** type_info() {
            static app::StatScreenDisplayFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatScreenDisplayFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatScreenDisplayFilter__Class* get_class() {
            return il2cpp::get_class<app::StatScreenDisplayFilter__Class>(type_info(), "", "StatScreenDisplayFilter");
        }
        inline app::StatScreenDisplayFilter* create() {
            return il2cpp::create_object<app::StatScreenDisplayFilter>(get_class());
        }
        inline app::StatScreenDisplayFilter__Array* create_array(int size) {
            return il2cpp::array_new<app::StatScreenDisplayFilter__Array>(get_class(), size);
        }
        inline app::StatScreenDisplayFilter__Array* create_array(const std::vector<app::StatScreenDisplayFilter*>& items) {
            return il2cpp::array_new<app::StatScreenDisplayFilter__Array>(get_class(), items);
        }
    } // namespace StatScreenDisplayFilter
} // namespace app::classes::types
