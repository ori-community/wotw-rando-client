#pragma once
#include <Modloader/app/structs/UberPoolManager_ObjectTracking.h>
#include <Modloader/app/structs/UberPoolManager_ObjectTracking__Array.h>
#include <Modloader/app/structs/UberPoolManager_ObjectTracking__Boxed.h>
#include <Modloader/app/structs/UberPoolManager_ObjectTracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolManager_ObjectTracking {
        inline app::UberPoolManager_ObjectTracking__Class** type_info() {
            static app::UberPoolManager_ObjectTracking__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolManager_ObjectTracking__Class**)(modloader::win::memory::resolve_rva(0x0478FB00));
            }
            return cache;
        }
        inline app::UberPoolManager_ObjectTracking__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolManager_ObjectTracking__Class>(type_info(), "", "UberPoolManager", "ObjectTracking");
        }
        inline app::UberPoolManager_ObjectTracking* create() {
            return il2cpp::create_object<app::UberPoolManager_ObjectTracking>(get_class());
        }
        inline app::UberPoolManager_ObjectTracking__Boxed* box(app::UberPoolManager_ObjectTracking value) {
            return il2cpp::box_value<app::UberPoolManager_ObjectTracking__Boxed>(get_class(), value);
        }
        inline app::UberPoolManager_ObjectTracking__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolManager_ObjectTracking__Array>(get_class(), size);
        }
        inline app::UberPoolManager_ObjectTracking__Array* create_array(const std::vector<app::UberPoolManager_ObjectTracking>& items) {
            return il2cpp::array_new<app::UberPoolManager_ObjectTracking__Array>(get_class(), items);
        }
    } // namespace UberPoolManager_ObjectTracking
} // namespace app::classes::types
