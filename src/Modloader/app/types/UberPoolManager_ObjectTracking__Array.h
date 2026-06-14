#pragma once
#include <Modloader/app/structs/UberPoolManager_ObjectTracking__Array.h>
#include <Modloader/app/structs/UberPoolManager_ObjectTracking__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolManager_ObjectTracking__Array {
        inline app::UberPoolManager_ObjectTracking__Array__Class** type_info() {
            static app::UberPoolManager_ObjectTracking__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolManager_ObjectTracking__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolManager_ObjectTracking__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolManager_ObjectTracking__Array__Class>(type_info(), "", "UberPoolManager+ObjectTracking[]");
        }
        inline app::UberPoolManager_ObjectTracking__Array* create() {
            return il2cpp::create_object<app::UberPoolManager_ObjectTracking__Array>(get_class());
        }
    } // namespace UberPoolManager_ObjectTracking__Array
} // namespace app::classes::types
