#pragma once
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/LineRenderer__Array.h>
#include <Modloader/app/structs/LineRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineRenderer {
        inline app::LineRenderer__Class** type_info() {
            static app::LineRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineRenderer__Class* get_class() {
            return il2cpp::get_class<app::LineRenderer__Class>(type_info(), "UnityEngine", "LineRenderer");
        }
        inline app::LineRenderer* create() {
            return il2cpp::create_object<app::LineRenderer>(get_class());
        }
        inline app::LineRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::LineRenderer__Array>(get_class(), size);
        }
        inline app::LineRenderer__Array* create_array(const std::vector<app::LineRenderer*>& items) {
            return il2cpp::array_new<app::LineRenderer__Array>(get_class(), items);
        }
    } // namespace LineRenderer
} // namespace app::classes::types
