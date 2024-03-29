#pragma once
#include <Modloader/app/structs/ICanvasElement.h>
#include <Modloader/app/structs/ICanvasElement__Array.h>
#include <Modloader/app/structs/ICanvasElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICanvasElement {
        inline app::ICanvasElement__Class** type_info() {
            static app::ICanvasElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICanvasElement__Class**)(modloader::win::memory::resolve_rva(0x047655C8));
            }
            return cache;
        }
        inline app::ICanvasElement__Class* get_class() {
            return il2cpp::get_class<app::ICanvasElement__Class>(type_info(), "UnityEngine.UI", "ICanvasElement");
        }
        inline app::ICanvasElement__Array* create_array(int size) {
            return il2cpp::array_new<app::ICanvasElement__Array>(get_class(), size);
        }
        inline app::ICanvasElement__Array* create_array(const std::vector<app::ICanvasElement*>& items) {
            return il2cpp::array_new<app::ICanvasElement__Array>(get_class(), items);
        }
    } // namespace ICanvasElement
} // namespace app::classes::types
