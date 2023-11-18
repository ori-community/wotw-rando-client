#pragma once
#include <Modloader/app/structs/ScriptableObject.h>
#include <Modloader/app/structs/ScriptableObject__Array.h>
#include <Modloader/app/structs/ScriptableObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptableObject {
        inline app::ScriptableObject__Class** type_info() {
            static app::ScriptableObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScriptableObject__Class**)(modloader::win::memory::resolve_rva(0x047891A8));
            }
            return cache;
        }
        inline app::ScriptableObject__Class* get_class() {
            return il2cpp::get_class<app::ScriptableObject__Class>(type_info(), "UnityEngine", "ScriptableObject");
        }
        inline app::ScriptableObject* create() {
            return il2cpp::create_object<app::ScriptableObject>(get_class());
        }
        inline app::ScriptableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::ScriptableObject__Array>(get_class(), size);
        }
        inline app::ScriptableObject__Array* create_array(const std::vector<app::ScriptableObject*>& items) {
            return il2cpp::array_new<app::ScriptableObject__Array>(get_class(), items);
        }
    } // namespace ScriptableObject
} // namespace app::classes::types
