#pragma once
#include <Modloader/app/structs/Vector3Int.h>
#include <Modloader/app/structs/Vector3Int__Boxed.h>
#include <Modloader/app/structs/Vector3Int__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector3Int {
        inline app::Vector3Int__Class** type_info() {
            static app::Vector3Int__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vector3Int__Class**)(modloader::win::memory::resolve_rva(0x0472CA30));
            }
            return cache;
        }
        inline app::Vector3Int__Class* get_class() {
            return il2cpp::get_class<app::Vector3Int__Class>(type_info(), "UnityEngine", "Vector3Int");
        }
        inline app::Vector3Int* create() {
            return il2cpp::create_object<app::Vector3Int>(get_class());
        }
        inline app::Vector3Int__Boxed* box(app::Vector3Int value) {
            return il2cpp::box_value<app::Vector3Int__Boxed>(get_class(), value);
        }
    } // namespace Vector3Int
} // namespace app::classes::types
