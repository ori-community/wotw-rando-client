#pragma once
#include <Modloader/app/structs/RejectHandler.h>
#include <Modloader/app/structs/RejectHandler__Array.h>
#include <Modloader/app/structs/RejectHandler__Boxed.h>
#include <Modloader/app/structs/RejectHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RejectHandler {
        inline app::RejectHandler__Class** type_info() {
            static app::RejectHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RejectHandler__Class**)(modloader::win::memory::resolve_rva(0x0475AB98));
            }
            return cache;
        }
        inline app::RejectHandler__Class* get_class() {
            return il2cpp::get_class<app::RejectHandler__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "RejectHandler");
        }
        inline app::RejectHandler* create() {
            return il2cpp::create_object<app::RejectHandler>(get_class());
        }
        inline app::RejectHandler__Boxed* box(app::RejectHandler value) {
            return il2cpp::box_value<app::RejectHandler__Boxed>(get_class(), value);
        }
        inline app::RejectHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::RejectHandler__Array>(get_class(), size);
        }
        inline app::RejectHandler__Array* create_array(const std::vector<app::RejectHandler>& items) {
            return il2cpp::array_new<app::RejectHandler__Array>(get_class(), items);
        }
    } // namespace RejectHandler
} // namespace app::classes::types
