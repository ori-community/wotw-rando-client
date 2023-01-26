#pragma once
#include <Modloader/app/structs/IUberStateApplierWithCallbacks.h>
#include <Modloader/app/structs/IUberStateApplierWithCallbacks__Array.h>
#include <Modloader/app/structs/IUberStateApplierWithCallbacks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberStateApplierWithCallbacks {
        inline app::IUberStateApplierWithCallbacks__Class** type_info() {
            static app::IUberStateApplierWithCallbacks__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberStateApplierWithCallbacks__Class**)(modloader::win::memory::resolve_rva(0x047639B0));
            }
            return cache;
        }
        inline app::IUberStateApplierWithCallbacks__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplierWithCallbacks__Class>(type_info(), "Moon", "IUberStateApplierWithCallbacks");
        }
        inline app::IUberStateApplierWithCallbacks__Array* create_array(int size) {
            return il2cpp::array_new<app::IUberStateApplierWithCallbacks__Array>(get_class(), size);
        }
        inline app::IUberStateApplierWithCallbacks__Array* create_array(const std::vector<app::IUberStateApplierWithCallbacks*>& items) {
            return il2cpp::array_new<app::IUberStateApplierWithCallbacks__Array>(get_class(), items);
        }
    } // namespace IUberStateApplierWithCallbacks
} // namespace app::classes::types
