#pragma once
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Rect__Boxed.h>
#include <Modloader/app/structs/Rect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rect {
        inline app::Rect__Class** type_info() {
            static app::Rect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Rect__Class**)(modloader::win::memory::resolve_rva(0x0475B480));
            }
            return cache;
        }
        inline app::Rect__Class* get_class() {
            return il2cpp::get_class<app::Rect__Class>(type_info(), "UnityEngine", "Rect");
        }
        inline app::Rect* create() {
            return il2cpp::create_object<app::Rect>(get_class());
        }
        inline app::Rect__Boxed* box(app::Rect value) {
            return il2cpp::box_value<app::Rect__Boxed>(get_class(), value);
        }
        inline app::Rect__Array* create_array(int size) {
            return il2cpp::array_new<app::Rect__Array>(get_class(), size);
        }
        inline app::Rect__Array* create_array(const std::vector<app::Rect>& items) {
            return il2cpp::array_new<app::Rect__Array>(get_class(), items);
        }
    } // namespace Rect
} // namespace app::classes::types
#pragma once
#include <Modloader/app/structs/RECT.h>
#include <Modloader/app/structs/RECT__Boxed.h>
#include <Modloader/app/structs/RECT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RECT {
        inline app::RECT__Class** type_info() {
            static app::RECT__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RECT__Class**)(modloader::win::memory::resolve_rva(0x0473E098));
            }
            return cache;
        }
        inline app::RECT__Class* get_class() {
            return il2cpp::get_class<app::RECT__Class>(type_info(), "", "RECT");
        }
        inline app::RECT* create() {
            return il2cpp::create_object<app::RECT>(get_class());
        }
        inline app::RECT__Boxed* box(app::RECT value) {
            return il2cpp::box_value<app::RECT__Boxed>(get_class(), value);
        }
    } // namespace RECT
} // namespace app::classes::types
