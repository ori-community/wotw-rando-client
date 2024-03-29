#pragma once
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Type__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Type {
        inline app::Type__Class** type_info() {
            static app::Type__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Type__Class**)(modloader::win::memory::resolve_rva(0x047437F8));
            }
            return cache;
        }
        inline app::Type__Class* get_class() {
            return il2cpp::get_class<app::Type__Class>(type_info(), "System", "Type");
        }
        inline app::Type* create() {
            return il2cpp::create_object<app::Type>(get_class());
        }
        inline app::Type__Array* create_array(int size) {
            return il2cpp::array_new<app::Type__Array>(get_class(), size);
        }
        inline app::Type__Array* create_array(const std::vector<app::Type*>& items) {
            return il2cpp::array_new<app::Type__Array>(get_class(), items);
        }
    } // namespace Type
} // namespace app::classes::types
