#pragma once
#include <Modloader/app/structs/ICleverMenuFadeObserver.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver__Array.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICleverMenuFadeObserver {
        inline app::ICleverMenuFadeObserver__Class** type_info() {
            static app::ICleverMenuFadeObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICleverMenuFadeObserver__Class**)(modloader::win::memory::resolve_rva(0x0471B9C0));
            }
            return cache;
        }
        inline app::ICleverMenuFadeObserver__Class* get_class() {
            return il2cpp::get_class<app::ICleverMenuFadeObserver__Class>(type_info(), "", "ICleverMenuFadeObserver");
        }
        inline app::ICleverMenuFadeObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ICleverMenuFadeObserver__Array>(get_class(), size);
        }
        inline app::ICleverMenuFadeObserver__Array* create_array(const std::vector<app::ICleverMenuFadeObserver*>& items) {
            return il2cpp::array_new<app::ICleverMenuFadeObserver__Array>(get_class(), items);
        }
    } // namespace ICleverMenuFadeObserver
} // namespace app::classes::types
