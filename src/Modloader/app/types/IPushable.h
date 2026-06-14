#pragma once
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/IPushable__Array.h>
#include <Modloader/app/structs/IPushable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPushable {
        inline app::IPushable__Class** type_info() {
            static app::IPushable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPushable__Class**)(modloader::win::memory::resolve_rva(0x04755EB8));
            }
            return cache;
        }
        inline app::IPushable__Class* get_class() {
            return il2cpp::get_class<app::IPushable__Class>(type_info(), "", "IPushable");
        }
        inline app::IPushable__Array* create_array(int size) {
            return il2cpp::array_new<app::IPushable__Array>(get_class(), size);
        }
        inline app::IPushable__Array* create_array(const std::vector<app::IPushable*>& items) {
            return il2cpp::array_new<app::IPushable__Array>(get_class(), items);
        }
    } // namespace IPushable
} // namespace app::classes::types
