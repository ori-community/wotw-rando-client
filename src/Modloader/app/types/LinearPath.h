#pragma once
#include <Modloader/app/structs/LinearPath.h>
#include <Modloader/app/structs/LinearPath__Array.h>
#include <Modloader/app/structs/LinearPath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinearPath {
        inline app::LinearPath__Class** type_info() {
            static app::LinearPath__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinearPath__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinearPath__Class* get_class() {
            return il2cpp::get_class<app::LinearPath__Class>(type_info(), "", "LinearPath");
        }
        inline app::LinearPath* create() {
            return il2cpp::create_object<app::LinearPath>(get_class());
        }
        inline app::LinearPath__Array* create_array(int size) {
            return il2cpp::array_new<app::LinearPath__Array>(get_class(), size);
        }
        inline app::LinearPath__Array* create_array(const std::vector<app::LinearPath*>& items) {
            return il2cpp::array_new<app::LinearPath__Array>(get_class(), items);
        }
    } // namespace LinearPath
} // namespace app::classes::types
