#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver__Class.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver__Array.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver.h>

namespace app::classes::types {
    namespace ICleverMenuFadeObserver {
        inline app::ICleverMenuFadeObserver__Class** type_info = (app::ICleverMenuFadeObserver__Class**)(modloader::win::memory::resolve_rva(0x0471B9C0));
        inline app::ICleverMenuFadeObserver__Class* get_class() {
            return il2cpp::get_class<app::ICleverMenuFadeObserver__Class>(type_info, "", "ICleverMenuFadeObserver");
        }
        inline app::ICleverMenuFadeObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ICleverMenuFadeObserver__Array>(get_class(), size);
        }
        inline app::ICleverMenuFadeObserver__Array* create_array(const std::vector<app::ICleverMenuFadeObserver*>& items) {
            return il2cpp::array_new<app::ICleverMenuFadeObserver__Array>(get_class(), items);
        }
    } // namespace ICleverMenuFadeObserver
} // namespace app::classes::types
