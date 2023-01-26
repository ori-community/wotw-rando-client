#pragma once
#include <Modloader/app/structs/UberSwarmer.h>
#include <Modloader/app/structs/UberSwarmer__Array.h>
#include <Modloader/app/structs/UberSwarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarmer {
        inline app::UberSwarmer__Class** type_info() {
            static app::UberSwarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarmer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarmer__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmer__Class>(type_info(), "", "UberSwarmer");
        }
        inline app::UberSwarmer* create() {
            return il2cpp::create_object<app::UberSwarmer>(get_class());
        }
        inline app::UberSwarmer__Array* create_array(int size) {
            return il2cpp::array_new<app::UberSwarmer__Array>(get_class(), size);
        }
        inline app::UberSwarmer__Array* create_array(const std::vector<app::UberSwarmer*>& items) {
            return il2cpp::array_new<app::UberSwarmer__Array>(get_class(), items);
        }
    } // namespace UberSwarmer
} // namespace app::classes::types
