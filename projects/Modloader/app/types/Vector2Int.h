#pragma once
#include <Modloader/app/structs/Vector2Int.h>
#include <Modloader/app/structs/Vector2Int__Boxed.h>
#include <Modloader/app/structs/Vector2Int__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector2Int {
        inline app::Vector2Int__Class** type_info() {
            static app::Vector2Int__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vector2Int__Class**)(modloader::win::memory::resolve_rva(0x04790BA0));
            }
            return cache;
        }
        inline app::Vector2Int__Class* get_class() {
            return il2cpp::get_class<app::Vector2Int__Class>(type_info(), "UnityEngine", "Vector2Int");
        }
        inline app::Vector2Int* create() {
            return il2cpp::create_object<app::Vector2Int>(get_class());
        }
        inline app::Vector2Int__Boxed* box(app::Vector2Int value) {
            return il2cpp::box_value<app::Vector2Int__Boxed>(get_class(), value);
        }
    } // namespace Vector2Int
} // namespace app::classes::types
