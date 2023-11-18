#pragma once
#include <Modloader/app/structs/WebConnectionGroup.h>
#include <Modloader/app/structs/WebConnectionGroup__Array.h>
#include <Modloader/app/structs/WebConnectionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnectionGroup {
        inline app::WebConnectionGroup__Class** type_info() {
            static app::WebConnectionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnectionGroup__Class**)(modloader::win::memory::resolve_rva(0x047055F8));
            }
            return cache;
        }
        inline app::WebConnectionGroup__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup__Class>(type_info(), "System.Net", "WebConnectionGroup");
        }
        inline app::WebConnectionGroup* create() {
            return il2cpp::create_object<app::WebConnectionGroup>(get_class());
        }
        inline app::WebConnectionGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::WebConnectionGroup__Array>(get_class(), size);
        }
        inline app::WebConnectionGroup__Array* create_array(const std::vector<app::WebConnectionGroup*>& items) {
            return il2cpp::array_new<app::WebConnectionGroup__Array>(get_class(), items);
        }
    } // namespace WebConnectionGroup
} // namespace app::classes::types
