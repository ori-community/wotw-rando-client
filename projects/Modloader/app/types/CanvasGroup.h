#pragma once
#include <Modloader/app/structs/CanvasGroup.h>
#include <Modloader/app/structs/CanvasGroup__Array.h>
#include <Modloader/app/structs/CanvasGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasGroup {
        inline app::CanvasGroup__Class** type_info() {
            static app::CanvasGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CanvasGroup__Class**)(modloader::win::memory::resolve_rva(0x04784EC0));
            }
            return cache;
        }
        inline app::CanvasGroup__Class* get_class() {
            return il2cpp::get_class<app::CanvasGroup__Class>(type_info(), "UnityEngine", "CanvasGroup");
        }
        inline app::CanvasGroup* create() {
            return il2cpp::create_object<app::CanvasGroup>(get_class());
        }
        inline app::CanvasGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::CanvasGroup__Array>(get_class(), size);
        }
        inline app::CanvasGroup__Array* create_array(const std::vector<app::CanvasGroup*>& items) {
            return il2cpp::array_new<app::CanvasGroup__Array>(get_class(), items);
        }
    } // namespace CanvasGroup
} // namespace app::classes::types
