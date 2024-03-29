#pragma once
#include <Modloader/app/structs/UberPoolItem.h>
#include <Modloader/app/structs/UberPoolItem__Array.h>
#include <Modloader/app/structs/UberPoolItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolItem {
        inline app::UberPoolItem__Class** type_info() {
            static app::UberPoolItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolItem__Class**)(modloader::win::memory::resolve_rva(0x047460B8));
            }
            return cache;
        }
        inline app::UberPoolItem__Class* get_class() {
            return il2cpp::get_class<app::UberPoolItem__Class>(type_info(), "", "UberPoolItem");
        }
        inline app::UberPoolItem* create() {
            return il2cpp::create_object<app::UberPoolItem>(get_class());
        }
        inline app::UberPoolItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolItem__Array>(get_class(), size);
        }
        inline app::UberPoolItem__Array* create_array(const std::vector<app::UberPoolItem*>& items) {
            return il2cpp::array_new<app::UberPoolItem__Array>(get_class(), items);
        }
    } // namespace UberPoolItem
} // namespace app::classes::types
