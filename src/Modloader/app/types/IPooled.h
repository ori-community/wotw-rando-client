#pragma once
#include <Modloader/app/structs/IPooled.h>
#include <Modloader/app/structs/IPooled__Array.h>
#include <Modloader/app/structs/IPooled__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPooled {
        inline app::IPooled__Class** type_info() {
            static app::IPooled__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPooled__Class**)(modloader::win::memory::resolve_rva(0x04754A78));
            }
            return cache;
        }
        inline app::IPooled__Class* get_class() {
            return il2cpp::get_class<app::IPooled__Class>(type_info(), "", "IPooled");
        }
        inline app::IPooled__Array* create_array(int size) {
            return il2cpp::array_new<app::IPooled__Array>(get_class(), size);
        }
        inline app::IPooled__Array* create_array(const std::vector<app::IPooled*>& items) {
            return il2cpp::array_new<app::IPooled__Array>(get_class(), items);
        }
    } // namespace IPooled
} // namespace app::classes::types
