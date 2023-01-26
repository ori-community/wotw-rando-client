#pragma once
#include <Modloader/app/structs/IRenderEntity.h>
#include <Modloader/app/structs/IRenderEntity__Array.h>
#include <Modloader/app/structs/IRenderEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRenderEntity {
        inline app::IRenderEntity__Class** type_info() {
            static app::IRenderEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRenderEntity__Class**)(modloader::win::memory::resolve_rva(0x047637A0));
            }
            return cache;
        }
        inline app::IRenderEntity__Class* get_class() {
            return il2cpp::get_class<app::IRenderEntity__Class>(type_info(), "Moon.VisualDebug", "IRenderEntity");
        }
        inline app::IRenderEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::IRenderEntity__Array>(get_class(), size);
        }
        inline app::IRenderEntity__Array* create_array(const std::vector<app::IRenderEntity*>& items) {
            return il2cpp::array_new<app::IRenderEntity__Array>(get_class(), items);
        }
    } // namespace IRenderEntity
} // namespace app::classes::types
