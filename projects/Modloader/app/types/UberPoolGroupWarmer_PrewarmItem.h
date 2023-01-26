#pragma once
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Array.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Boxed.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer_PrewarmItem {
        inline app::UberPoolGroupWarmer_PrewarmItem__Class** type_info() {
            static app::UberPoolGroupWarmer_PrewarmItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolGroupWarmer_PrewarmItem__Class**)(modloader::win::memory::resolve_rva(0x0478B3E0));
            }
            return cache;
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolGroupWarmer_PrewarmItem__Class>(type_info(), "", "UberPoolGroupWarmer", "PrewarmItem");
        }
        inline app::UberPoolGroupWarmer_PrewarmItem* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer_PrewarmItem>(get_class());
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Boxed* box(app::UberPoolGroupWarmer_PrewarmItem value) {
            return il2cpp::box_value<app::UberPoolGroupWarmer_PrewarmItem__Boxed>(get_class(), value);
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroupWarmer_PrewarmItem__Array>(get_class(), size);
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Array* create_array(const std::vector<app::UberPoolGroupWarmer_PrewarmItem>& items) {
            return il2cpp::array_new<app::UberPoolGroupWarmer_PrewarmItem__Array>(get_class(), items);
        }
    } // namespace UberPoolGroupWarmer_PrewarmItem
} // namespace app::classes::types
